#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/**
 * error_exit - Display an error message and exit with status 98.
 * @message: The error message to display.
 */
void error_exit(char *message)
{
dprintf(STDERR_FILENO, "%s\n", message);
exit(98);
}

/**
 * read_elf_header - Read and display the ELF header information.
 * @fd: The file descriptor of the ELF file.
 */
void read_elf_header(int fd)
{
Elf64_Ehdr header;
ssize_t bytes_read;
bytes_read = read(fd, &header, sizeof(header));
if (bytes_read == -1)
error_exit("Error: Can't read ELF header");
if (bytes_read != sizeof(header))
error_exit("Error: Not an ELF file");
printf("ELF Header:\n");
printf("  Magic:   ");
for (int i = 0; i < EI_NIDENT; i++)
printf("%02x%c", header.e_ident[i], i == EI_NIDENT - 1 ? '\n' : ' ');
printf("  Class:                             ");
switch (header.e_ident[EI_CLASS])
{
case ELFCLASS32:
printf("ELF32\n");
break;
case ELFCLASS64:
printf("ELF64\n");
break;
default:
printf("<unknown: %x>\n", header.e_ident[EI_CLASS]);
}
printf("  Data:                              ");
switch (header.e_ident[EI_DATA])
{
case ELFDATA2LSB:
printf("2's complement, little endian\n");
break;
case ELFDATA2MSB:
printf("2's complement, big endian\n");
break;
default:
printf("<unknown: %x>\n", header.e_ident[EI_DATA]);
}
printf("  Version:                           %d 
		(current)\n", header.e_ident[EI_VERSION]);
printf("  OS/ABI:                            ");
switch (header.e_ident[EI_OSABI])
{
case ELFOSABI_SYSV:
printf("UNIX - System V\n");
break;
case ELFOSABI_NETBSD:
printf("UNIX - NetBSD\n");
break;
case ELFOSABI_SOLARIS:
printf("UNIX - Solaris\n");
break;
default:
printf("<unknown: %x>\n", header.e_ident[EI_OSABI]);
}
printf("  ABI Version:                       %d\n", 
		header.e_ident[EI_ABIVERSION]);
printf("  Type:                              ");
switch (header.e_type)
{
case ET_NONE:
printf("NONE (Unknown type)\n");
break;
case ET_REL:
printf("REL (Relocatable file)\n");
break;
case ET_EXEC:
printf("EXEC (Executable file)\n");
break;
case ET_DYN:
printf("DYN (Shared object file)\n");
break;
case ET_CORE:
printf("CORE (Core file)\n");
break;
default:
printf("<unknown: %x>\n", header.e_type);
}
printf("  Entry point address:               0x%lx\n", 
		header.e_entry);
}

/**
 * main - Entry point of the program.
 * @argc: Argument count (number of command-line arguments).
 * @argv: Argument vector (array of strings containing command-line arg
 *
 * Return: 0 on success, a non-zero value on failure.
 */
int main(int argc, char *argv[])
{
int fd;
if (argc != 2)
error_exit("Usage: elf_header elf_filename");
fd = open(argv[1], O_RDONLY);
if (fd == -1)
error_exit("Error: Can't read ELF file");
read_elf_header(fd);
if (close(fd) == -1)
error_exit("Error: Can't close file descriptor");
return (0);
}
