#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdint.h>

typedef unsigned char uc;

/* Function Prototypes */

int _putchar(char c);

/* Mandatory */
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

/* Advanced */

/**
 * struct header - data structure for the header
 * @e_ident: ELF identification
 * @e_type: object file type
 * @e_machine: machine type
 * @e_version: object file version
 * @e_entry: entry point addresss
 */
typedef struct header
{
	unsigned char e_ident[EI_NIDENT];
	uint16_t e_type;
	uint16_t e_machine;
	uint32_t e_version;
	uint64_t e_entry;
} Elf64_header;

#endif /* #ifndef MAIN_H */

