#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <elf.h>
#include "main.h"
typedef unsigned char uc;

/**
 * print_magic_class_data_version - prints the magic, class, data and version
 * @h: the header
 * Return: nothing
 */
void print_magic_class_data_version(Elf64_Ehdr h)
{
	int i;

	printf("Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", header.e_ident[i]);
	printf("\n");
	printf("Class:                             ");
	switch (h.e_ident[EI_CLASS])
	{
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("Unknown\n");
		break;
	}
	printf("Data:                              ");
	switch (h.e_ident[EI_DATA])
	{
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("Unknown data format\n");
		break;
	}
	printf("Version:                           ");
	if (h.e_ident[EI_VERSION] == EV_CURRENT)
		printf("1 (current)\n");
	else
		printf("%u\n", h.e_ident[EI_VERSION]);
}

/**
 * print_os_abi - prints the abi of the OS
 * @osabi: char for OS ABI
 * Return: nothing
 */
void print_os_abi(unsigned char osabi)
{
	printf("OS/ABI:                            ");
	switch (osabi)
	{
	case ELFOSABI_SYSV:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("Sun Solaris\n");
		break;
	case ELFOSABI_AIX:
		printf("IBM AIX\n");
		break;
	case ELFOSABI_IRIX:
		printf("SGI Irix\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("FreeBSD\n");
		break;
	}
}

/**
 * print_os_abi2 - prints the second half of the OS ABI
 * @abi: OS ABI
 * Return: nothing
 */
void print_os_abi2(uc abi)
{
	switch(abi)
	{
	case ELFOSABI_TRU64:
		printf("Compaq TRU64 UNIX\n");
		break;
	case ELFOSABI_MODESTO:
		printf("Novell Modesto\n");
		break;
	case ELFOSABI_OPENBSD:
		printf("OpenBSD\n");
		break;
	case ELFOSABI_ARM_AEABI:
		printf("ARM EABI\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone (embedded) application\n");
		break;
	default:
		printf("Unknown: %u\n", osabi);
		break;
	}
}

/**
 * print_abi_version_type - prints the abi version and type
 * @abi_version: the version of the OS ABI
 * @type: type
 * Return:nothing
 */
void print_abi_version_type(uc abi_version, uint16_t type)
{
	printf("ABI Version:                       %u\n", abi_version);

	printf("Type:                              ");
	switch (type)
	{
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_DYN:
		printf("Shared object file\n");
		break;
	case ET_CORE:
		printf("Core file\n");
		break;
	case ET_LOOS:
		printf("Operating system-specific range start\n");
		break;
	case ET_HIOS:
		printf("Operating system-specific range end\n");
		break;
	case ET_LOPROC:
		printf("Processor-specific range start\n");
		break;
	case ET_HIPROC:
		printf("Processor-specific range end\n");
		break;
	default:
		printf("UNKNOWN: %u\n", type);
		break;
	}
}

/**
 * print_entry - print the entry address
 * @entry: entry address
 * Return: nothing
 */
void print_entry(uint64_t entry)
{
	printf("Entry point address:               0x%lx\n", entry);
}

/**
 * main - prints the contents of the ELF file
 * @argc: number of arguments
 * @argv: the arguments
 * Return: 0 - success
 * 98 - if error or file not ELF
 */
int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr header;

	if (argc != 2)
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
	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		perror("Error reading ELF header");
		close(fd);
		exit(98);
	}
	if (strncmp((char *)header.e_ident, ELFMAG, SELFMAG) != 0)
	{
		fprintf(stderr, "This is not an ELF file.\n");
		close(fd);
		exit(98);
	}

	print_magic_class_data_version(header);
	print_os_abi(header.e_ident[EI_OSABI]);
	print_os_abi2(header.e_ident[EI_OSABI]);
	print_abi_version_type(header.e_ident[EI_ABIVERSION], header.e_type);
	print_entry(header.e_entry);

	close(fd);
	return (0);
}