#include <stdio.h>
#include "main.h"

/**
 * print_elf - prints the header file contents
 * @h: pointer to the header struct
 * Return: nothing
 */
void print_elf(Elf64_header *h)
{
	int i;
	char *tmp;

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", h->e_ident[i]);
	printf("\n");

	printf("  Class:                             ");
	printf(h->e_ident[4] == 1 ? "ELF32\n" : "ELF64\n");
	printf("  Data:                              ");
	if (h->e_ident[5] == 1)
		tmp = "2's complement, little endian\n";
	else
		tmp = "2's complement, big endian\n";
	printf("%s", tmp);

	printf("  Version:                           %u (current)\n", h->e_ident[6]);
	printf("  OS/ABI:                            UNIX - System V\n");
	printf("  ABI Version:                       %u\n", h->e_ident[8]);

	printf("  Type:                              ");
	if (h->e_type == 2)
		tmp = "EXEC (Executable file)\n";
	else
		tmp = "DYN (Shared object file)\n";
	printf("%s", tmp);
	printf("  Entry point address:               0x%lx\n", h->e_entry);
}

/**
 * main - displays the information contained in the ELF header
 * @argc: number of args
 * @argv: the argument vector
 *
 * Description:  at the start of an ELF file
 * Return: 0 - success, otherwise error
 */
int main(int argc, char *argv[])
{
	int fd;
	Elf64_header h;

	if (argc < 2)
	{
		fprintf(stderr, "Usage: elf_header elf_filename\n");
		exit(98);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		perror("Error opening file");
		exit(98);
	}
	if (read(fd, &h, sizeof(Elf64_header)) != sizeof(Elf64_header))
	{
		perror("Error reading ELF header");
		close(fd);
		exit(98);
	}
	if (memcmp(h.e_ident, "\177ELF", 4) != 0)
	{
		fprintf(stderr, "This is not an ELF file\n");
		close(fd);
		exit(98);
	}
	print_elf(&h);
	close(fd);

	return (0);
}
