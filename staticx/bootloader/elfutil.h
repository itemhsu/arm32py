#ifndef BOOTLOADER_ELFUTIL_H
#define BOOTLOADER_ELFUTIL_H

#include <elf.h>
#include <stdbool.h>

#define Elf_Ehdr    Elf32_Ehdr
#define Elf_Phdr    Elf32_Phdr
#define Elf_Shdr    Elf32_Shdr
#define Elf_Dyn     Elf32_Dyn

bool
elf_is_valid(const Elf_Ehdr *ehdr);

Elf_Phdr *
elf_get_proghdr_by_type(Elf_Ehdr *ehdr, unsigned int ptype);

Elf_Shdr *
elf_get_section_by_name(Elf_Ehdr *ehdr, const char *lookup_name);

Elf_Shdr *
elf_get_section(Elf_Ehdr *ehdr, const char *lookup_name, Elf32_Word lookup_type);

#endif /* BOOTLOADER_ELFUTIL_H */
