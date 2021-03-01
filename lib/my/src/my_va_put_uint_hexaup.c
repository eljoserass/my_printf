/*
** EPITECH PROJECT, 2020
** my_printf
** File description:
** pass the correct arg type to the function
*/

#include "lib.h"

void my_va_put_uint_hexaup(va_list ap)
{
    my_put_uint_hexaup(va_arg(ap, unsigned int));
}

