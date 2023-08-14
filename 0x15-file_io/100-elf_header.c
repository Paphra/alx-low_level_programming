#include <stdio.h>
#include <elf.h>
#include "main.h"

/**
 * print_magic - prints the magic
 * @e_ident: the identity
 * Return: nothing
 */
void print_magic(uc *e_ident)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", e_ident[i]);
		if (i < EI_NIDENT - 1)
			printf(" ");
	}
	printf("\n");
}

/**
 * print_class - prints a class
 * @class: the class
 * Return: nothing
 */
void print_class(uc class)
{
	printf("  Class:			     ");
	switch (class)
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
}

/**
 * print_data - prints the data
 * @data: the data
 * Return: nothing
 */
void print_data(uc data)
{
	printf("  Data:				     ");
	switch (data)
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
}

/**
 * print_version - prints version
 * @version: the version
 * Return: nothing
 */
void print_version(uc version)
{
	printf("  Version:			     ");
	if (version == EV_CURRENT)
		printf("1 (current)\n");
	else
		printf("%u\n", version);
}

/**
 * print_os_abi2 - prints the second half of the OS ABI
 * @abi: OS ABI
 * Return: nothing
 */
void print_os_abi2(uc abi)
{
	switch (abi)
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
		printf("<unknown: %u>\n", abi);
		break;
	}
}

/**
 * print_os_abi - prints the abi of the OS
 * @osabi: char for OS ABI
 * Return: nothing
 */
void print_os_abi(uc osabi)
{
	printf("  OS/ABI:			     ");
	switch (osabi)
	{
	case ELFOSABI_SYSV:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
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
	default:
		print_os_abi2(osabi);
		break;
	}
}

/**
 * print_abi_version - prints the abi version
 * @abi_version: version
 * Return:nothing
 */
void print_abi_version(uc abi_version)
{
	printf("  ABI Version:			     %u\n", abi_version);
}

/**
 * print_type - prints type
 * @type: the type
 * Return: nothing
 */
void print_type(uint16_t type)
{
	printf("  Type:				     ");
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
		printf("<unknown: %u>\n", type);
		break;
	}
}

/**
 * print_entry - prints the entry
 * @h64: the header file for 64
 * @h32: the header file for 32
 * @class: the class
 * Return: nothing
 */
void print_entry(Elf64_Ehdr h64, Elf32_Ehdr h32, uc class)
{
	printf("  Entry point address:		     0x");
	if (class == ELFCLASS32)
		printf("%x\n", h32.e_entry);
	else
		printf("%lx\n", h64.e_entry);
}

/**
 * print_all - print all things
 * @h64: header for 64-bit
 * @h32: header for 32-bit
 * Return: nothing
 */
void print_all(Elf64_Ehdr h64, Elf32_Ehdr h32)
{
	uc cls = h64.e_ident[EI_CLASS];

	if (cls == ELFCLASS32)
	{
		print_magic(h32.e_ident);
		print_class(h32.e_ident[EI_CLASS]);
		print_data(h32.e_ident[EI_DATA]);
		print_version(h32.e_ident[EI_VERSION]);
		print_os_abi(h32.e_ident[EI_OSABI]);
		print_abi_version(h32.e_ident[EI_ABIVERSION]);
		print_type(h32.e_type);
		print_entry(h64, h32, cls);
	} else
	{
		print_magic(h64.e_ident);
		print_class(h64.e_ident[EI_CLASS]);
		print_data(h64.e_ident[EI_DATA]);
		print_version(h64.e_ident[EI_VERSION]);
		print_os_abi(h64.e_ident[EI_OSABI]);
		print_abi_version(h64.e_ident[EI_ABIVERSION]);
		print_type(h64.e_type);
		print_entry(h64, h32, cls);
	}
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
	Elf64_Ehdr h64;
	Elf32_Ehdr h32;

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
	if (read(fd, &h64, sizeof(h64)) != sizeof(h64))
	{
		perror("Error reading ELF header");
		close(fd);
		exit(98);
	}
	lseek(fd, 0, SEEK_SET);
	if (read(fd, &h32, sizeof(h32)) != sizeof(h32))
	{
		perror("Error reading 32-bit ELF header");
		close(fd);
		exit(98);
	}
	if (strncmp((char *)h64.e_ident, ELFMAG, SELFMAG) != 0)
	{
		fprintf(stderr, "This is not an ELF file.\n");
		close(fd);
		exit(98);
	}
	printf("ELF Header:\n");
	print_all(h64, h32);
	close(fd);
	return (0);
}
