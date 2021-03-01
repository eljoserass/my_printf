/*
** EPITECH PROJECT, 2020
** my_printf
** File description:
** call and pass the correct arguments to the function
*/

#include "lib.h"

void my_va_put_nonp_in_oct(va_list ap)
{
    my_put_nonp_in_oct(va_arg(ap, char *));
}