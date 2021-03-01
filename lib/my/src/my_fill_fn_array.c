/*
** EPITECH PROJECT, 2020
** my_printf
** File description:
** array of function and it flags.
*/

#include "lib.h"
#include <stdlib.h>

struct_flag_t *my_fill_fn_array_zero(void)
{
    struct_flag_t *fn_array = malloc(sizeof(struct_flag_t) * 11);

    if (fn_array == NULL)
        return (NULL);

    fn_array[0].flag = 's';
    fn_array[0].fn   = &my_va_putstr;
    fn_array[1].flag = 'c';
    fn_array[1].fn   = &my_va_putchar;
    fn_array[2].flag = 'd';
    fn_array[2].fn   = &my_va_put_nbr;
    fn_array[3].flag = 'i';
    fn_array[3].fn   = &my_va_put_nbr;
    fn_array[4].flag = 'b';
    fn_array[4].fn   = &my_va_put_bin_base;

    return (fn_array);
}

struct_flag_t *my_fill_fn_array(void)
{
    struct_flag_t *fn_array = my_fill_fn_array_zero();

    fn_array[5].flag = 'S';
    fn_array[5].fn   = &my_va_put_nonp_in_oct;
    fn_array[6].flag = 'o';
    fn_array[6].fn   = &my_va_put_uint_octa;
    fn_array[7].flag = 'u';
    fn_array[7].fn   = &my_va_put_unbr;
    fn_array[8].flag = 'x';
    fn_array[8].fn   = &my_va_put_uint_hexa;
    fn_array[9].flag = 'X';
    fn_array[9].fn   = &my_va_put_uint_hexaup;
    fn_array[10].fn  = NULL;

    return (fn_array);
}
