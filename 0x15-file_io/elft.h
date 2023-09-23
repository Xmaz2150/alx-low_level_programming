#ifndef ELFT_H
#define ELFT_H

#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void e_check(unsigned char *e_ident);
void pr_magic(unsigned char *e_ident);
void pr_class(unsigned char *e_ident);
void pr_data(unsigned char *e_ident);
void pr_version(unsigned char *e_ident);
void pr_abi(unsigned char *e_ident);
void pr_osabi(unsigned char *e_ident);
void pr_type(unsigned int e_type, unsigned char *e_ident);
void pr_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);

#endif /*ELFT_H*/
