#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void check_elf(unsigned char *);
void print_magic(unsigned char *);
void print_class(unsigned char *);
void print_data(unsigned char *);
void print_version(unsigned char *);
void print_abi(unsigned char *);
void print_osabi(unsigned char *);
void print_type(unsigned int, unsigned char *);
void print_entry(unsigned long int, unsigned char *);
void close_elf(int elf);

/**
 * check_elf - aabbcc
 * @indentation_by_e: aabbcc
 *
 * Description: aabbcc
 */
void check_elf(unsigned char *indentation_by_e)
{
	int index;

	for (index = 0; index < 4; index++)
	{
		if (indentation_by_e[index] != 127 &&
		    indentation_by_e[index] != 'E' &&
		    indentation_by_e[index] != 'L' &&
		    indentation_by_e[index] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * print_magic - aabbcc
 * @indentation_by_e: aabbcc
 *
 * Description: aabbcc
 */
void print_magic(unsigned char *indentation_by_e)
{
	int index;

	printf("  Magic:   ");

	for (index = 0; index < EI_NIDENT; index++)
	{
		printf("%02x", indentation_by_e[index]);

		if (index == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * print_class - aabbcc
 * @indentation_by_e: aabbcc
 */
void print_class(unsigned char *indentation_by_e)
{
	printf("  Class:                             ");

	switch (indentation_by_e[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", indentation_by_e[EI_CLASS]);
	}
}

/**
 * print_data - aabbcc
 * @indentation_by_e: aabbcc
 */
void print_data(unsigned char *indentation_by_e)
{
	printf("  Data:                              ");

	switch (indentation_by_e[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", indentation_by_e[EI_CLASS]);
	}
}

/**
 * print_version - aabbcc
 * @indentation_by_e: aabbcc
 */
void print_version(unsigned char *indentation_by_e)
{
	printf("  Version:                           %d",
	       indentation_by_e[EI_VERSION]);

	switch (indentation_by_e[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

/**
 * print_osabi - aabbcc
 * @indentation_by_e: aabbcc
 */
void print_osabi(unsigned char *indentation_by_e)
{
	printf("  OS/ABI:                            ");

	switch (indentation_by_e[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", indentation_by_e[EI_OSABI]);
	}
}

/**
 * print_abi - aabbcc
 * @indentation_by_e: aabbcc
 */
void print_abi(unsigned char *indentation_by_e)
{
	printf("  ABI Version:                       %d\n",
	       indentation_by_e[EI_ABIVERSION]);
}

/**
 * print_type - aabbcc
 * @the_e_type: aabbcc
 * @indentation_by_e: aabbcc
 */
void print_type(unsigned int theetype, unsigned char *indentation_by_e)
{
	if (indentation_by_e[EI_DATA] == ELFDATA2MSB)
		theetype >>= 8;

	printf("  Type:                              ");

	switch (theetype)
	{
	case ET_NONE:
		printf("NONE (None)\n");
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
		printf("<unknown: %x>\n", theetype);
	}
}

/**
 * print_entry - aabbcc
 * @enter_by_e: aabbcc
 * @indentation_by_e: aabbcc
 */
void print_entry(unsigned long int enter_by_e, unsigned char *indentation_by_e)
{
	printf("  Entry point address:               ");

	if (indentation_by_e[EI_DATA] == ELFDATA2MSB)
	{
		enter_by_e = ((enter_by_e << 8) & 0xFF00FF00) |
			  ((enter_by_e >> 8) & 0xFF00FF);
		enter_by_e = (enter_by_e << 16) | (enter_by_e >> 16);
	}

	if (indentation_by_e[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)enter_by_e);

	else
		printf("%#lx\n", enter_by_e);
}

/**
 * close_elf - aabbcc
 * @elf: aabbcc
 *
 * Description: aabbcc
 */
void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * main - aabbcc
 * @argumentc: aabbcc
 * @argumentv: aabbcc
 *
 * Return: aabbcc
 *
 * Description: aabbcc
 */
int main(int __attribute__((__unused__)) argumentc, char *argumentv[])
{
	Elf64_Ehdr *header;
	int o, r;

	o = open(argumentv[1], O_RDONLY);
	if (o == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argumentv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close_elf(o);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argumentv[1]);
		exit(98);
	}
	r = read(o, header, sizeof(Elf64_Ehdr));
	if (r == -1)
	{
		free(header);
		close_elf(o);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argumentv[1]);
		exit(98);
	}

	check_elf(header->indentation_by_e);
	printf("ELF Header:\n");
	print_magic(header->indentation_by_e);
	print_class(header->indentation_by_e);
	print_data(header->indentation_by_e);
	print_version(header->indentation_by_e);
	print_osabi(header->indentation_by_e);
	print_abi(header->indentation_by_e);
	print_type(header->theetype, header->indentation_by_e);
	print_entry(header->enter_by_e, header->indentation_by_e);

	free(header);
	close_elf(o);
	return (0);
}
