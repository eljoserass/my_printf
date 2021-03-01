/*
** EPITECH PROJECT, 2020
** my_printf
** File description:
** funcitons for the librarie to compile
*/

#ifndef LIB_H_
#define LIB_H_

#include <stdarg.h>
#include <stdlib.h>
#include "struct_flag.h"

void my_putchar(char c);
void my_va_putchar(va_list ap);
int my_strlen(char *str);
void my_putstr(char const *str);
void my_va_putstr(va_list ap);
int my_put_nbr(int nb);
void my_va_put_nbr(va_list ap);
void my_put_bin_base(unsigned int nb);
void my_va_put_bin_base(va_list ap);
void my_put_nonp_in_oct(char *str);
void my_va_put_nonp_in_oct(va_list ap);
void my_flagcmp(va_list ap, char flag);
char *my_revstr(char *str);
int my_put_uint_octa(unsigned int uint);
void my_va_put_uint_octa(va_list ap);
void my_put_unbr(unsigned int nb);
void my_va_put_unbr(va_list ap);
int my_put_uint_hexa(unsigned int uint);
void my_va_put_uint_hexa(va_list ap);
int my_put_uint_hexaup(unsigned int uint);
void my_va_put_uint_hexaup(va_list ap);
struct_flag_t *my_fill_fn_array();

#endif
