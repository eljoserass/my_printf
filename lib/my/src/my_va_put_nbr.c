/*
** EPITECH PROJECT, 2020
** my_printf
** File description:
** call my_put_nr passing it va_arg
*/

#include "lib.h"

void my_va_put_nbr(va_list ap)
{
    int nb = va_arg(ap, int);
    my_put_nbr(nb);
}