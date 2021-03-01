/*
** EPITECH PROJECT, 2020
** my_printf
** File description:
** co-funcfion that pass the corresponding  variable type to the function
*/

#include "lib.h"

void my_va_put_bin_base(va_list ap)
{
    unsigned int unb = va_arg(ap, unsigned int);

    my_put_bin_base(unb);
}