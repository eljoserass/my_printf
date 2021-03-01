/*
** EPITECH PROJECT, 2020
** my_printf
** File description:
** pass the correct argument to the function
*/

#include "lib.h"

void my_va_put_unbr(va_list ap)
{
    my_put_unbr(va_arg(ap, unsigned int));
}