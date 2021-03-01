/*
** EPITECH PROJECT, 2020
** my_printf
** File description:
** call my_putchar passing it arguments with va_arg
*/

#include "lib.h"

void my_va_putchar(va_list ap)
{
    my_putchar(va_arg(ap, int));
}