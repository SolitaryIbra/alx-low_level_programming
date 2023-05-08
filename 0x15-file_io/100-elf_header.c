#include <dwarf.h>
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
void close_elf(int);

/**
 * check_elf - aabbcc
 * @enum_indentation: aabbcc
 */
void check_elf(unsigned char *enum_indentation)
{
	int myindx;

	for (myindx = 0; myindx < 4; myindx++)
	{
		if (enum_indentation[myindx] != 127 &&
		    enum_indentation[myindx] != 'E' &&
		    enum_indentation[myindx] != 'L' &&
		    enum_indentation[myindx] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an dwarf file\n");
			exit(98);
		}
	}
}

/**
 * print_magic - aabbcc
 * @enum_indentation: aabbcc
 */
void print_magic(unsigned char *enum_indentation)
{
	int myindx;

	printf("  Magic:   ");

	for (myindx = 0; myindx < EI_NIDENT; myindx++)
	{
		printf("%02x", enum_indentation[myindx]);

		if (myindx == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * print_class -aabbcc
 * @enum_indentation: aabbcc
 */
void print_class(unsigned char *enum_indentation)
{
	printf("  Class:                             ");

	switch (enum_indentation[EI_CLASS])
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
		printf("<unknown: %x>\n", enum_indentation[EI_CLASS]);
	}
}

/**
 * print_data - aabbcc
 * @enum_indentation: aabbcc
 */
void print_data(unsigned char *enum_indentation)
{
	printf("  Data:                              ");

	switch (enum_indentation[EI_DATA])
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
		printf("<unknown: %x>\n", enum_indentation[EI_CLASS]);
	}
}

/**
 * print_version - aabbcc
 * @enum_indentation: aabbcc
 */
void print_version(unsigned char *enum_indentation)
{
	printf("  Version:                           %d",
	       enum_indentation[EI_VERSION]);

	switch (enum_indentation[EI_VERSION])
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
 * @enum_indentation: aabbcc
 */
void print_osabi(unsigned char *enum_indentation)
{
	printf("  OS/ABI:                            ");

	switch (enum_indentation[EI_OSABI])
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
		printf("<unknown: %x>\n", enum_indentation[EI_OSABI]);
	}
}

/**
 * print_abi - aabbcc
 * @enum_indentation: aabbcc
 */
void print_abi(unsigned char *enum_indentation)
{
	printf("  ABI Version:                       %d\n",
	       enum_indentation[EI_ABIVERSION]);
}

/**
 * print_type - aabbcc
 * @e_type: aabbcc
 * @enum_indentation: aabbcc
 */
void print_type(unsigned int e_type, unsigned char *enum_indentation)
{
	if (enum_indentation[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf("  Type:                              ");

	switch (e_type)
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
		printf("<unknown: %x>\n", e_type);
	}
}

/**
 * print_entry - aabbcc
 * @myelectronicentry: aabbcc
 * @enum_indentation: aabbcc
 */
void print_entry(unsigned long int myelectronicentry, unsigned char *enum_indentation)
{
	printf("  Entry point address:               ");

	if (enum_indentation[EI_DATA] == ELFDATA2MSB)
	{
		myelectronicentry = ((myelectronicentry << 8) & 0xFF00FF00) |
			  ((myelectronicentry >> 8) & 0xFF00FF);
		myelectronicentry = (myelectronicentry << 16) | (myelectronicentry >> 16);
	}

	if (enum_indentation[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)myelectronicentry);

	else
		printf("%#lx\n", myelectronicentry);
}

/**
 * close_elf - aabbcc
 * @dwarf: aabbcc
 *
 * Description: aabbcc
 */
void close_elf(int dwarf)
{
	if (close(dwarf) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", dwarf);
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
	int myopen, myreading;

	myopen = open(argumentv[1], O_RDONLY);
	if (myopen == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argumentv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close_elf(myopen);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argumentv[1]);
		exit(98);
	}
	myreading = read(myopen, header, sizeof(Elf64_Ehdr));
	if (myreading == -1)
	{
		free(header);
		close_elf(myopen);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argumentv[1]);
		exit(98);
	}

	check_elf(header->enum_indentation);
	printf("dwarf Header:\n");
	print_magic(header->enum_indentation);
	print_class(header->enum_indentation);
	print_data(header->enum_indentation);
	print_version(header->enum_indentation);
	print_osabi(header->enum_indentation);
	print_abi(header->enum_indentation);
	print_type(header->e_type, header->enum_indentation);
	print_entry(header->myelectronicentry, header->enum_indentation);

	free(header);
	close_elf(myopen);
	return (0);
}
