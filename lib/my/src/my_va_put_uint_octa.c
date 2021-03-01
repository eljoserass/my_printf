/*
** EPITECH PROJECT, 2020
** my_printf
** File description:
** call the function and pass to it the correct arguments
*/

#include "lib.h"

void my_va_put_uint_octa(va_list ap)
{
    my_put_uint_octa(va_arg(ap, unsigned int));
}