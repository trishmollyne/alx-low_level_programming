#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/**
 * display_error - Displays an error message to stderr and exits with code 98.
 * @message: The error message to display.
 */
void display_error(const char *message)
{
dprintf(STDERR_FILENO, "%s\n", message);
exit(98);
}

/**
 * display_elf_header_info - Displays information from the ELF header.
 * @header: Pointer to the ELF header structure.
 */
void display_elf_header_info(Elf64_Ehdr *header)
{
printf("Magic:   ");
for (int i = 0; i < EI_NIDENT; i++)
printf("%02x ", header->e_ident[i]);
printf("\nClass:
%s\n",
header->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" :
header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "Invalid");
printf("Data:%s\n",
header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" :
header->e_ident[EI_DATA] == ELFDATA2MSB ? "2's complement, big endian"
: "Invalid");
printf("Version:%d (current)\n", header->e_ident[EI_VERSION]);
printf("OS/ABI:%s\n",
header->e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" :
header->e_ident[EI_OSABI] == ELFOSABI_LINUX ? "UNIX - Linux" : "Other");
printf("ABI Version:
%d\n", header->e_ident[EI_ABIVERSION]);
printf("Type: %s\n",
header->e_type == ET_NONE ? "NONE (Unknown type)" :
header->e_type == ET_REL ? "REL (Relocatable file)" :
header->e_type == ET_EXEC ? "EXEC (Executable file)" :
header->e_type == ET_DYN ? "DYN (Shared object file)" :
header->e_type == ET_CORE ? "CORE (Core file)" : "Other");
printf("Entry point address:0x%lx\n", header->e_entry);
}

/**
 * main - Entry point for the elf_header program.
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments.
 *
 * Return: 0 on success, 98 on failure.
 */
int main(int argc, char *argv[])
{
if (argc != 2)
{
dprintf(STDERR_FILENO, "Usage: %s elf_filename\n",  argv[0]);
return (98);
}
int fd = open(argv[1], O_RDONLY);
if (fd == -1)
display_error("Error: Can't open file");
Elf64_Ehdr elf_header;
if (read(fd, &elf_header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
display_error("Error: Can't read file");
if
(elf_header.e_ident[EI_MAG0] != ELFMAG0 ||
elf_header.e_ident[EI_MAG1] != ELFMAG1 ||
elf_header.e_ident[EI_MAG2] != ELFMAG2 ||
elf_header.e_ident[EI_MAG3] != ELFMAG3)
display_error("Error: Not an ELF file");
isplay_elf_header_info(&elf_header);
close(fd);
return (0);
}
