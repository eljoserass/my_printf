/*
** EPITECH PROJECT, 2020
** my_printf
** File description:
** call the function and pass the propper arguments
*/

#include "lib.h"

void my_va_put_uint_hexa(va_list ap)
{
    my_put_uint_hexa(va_arg(ap, unsigned int));
}