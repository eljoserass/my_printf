/*
** EPITECH PROJECT, 2020
** my_printf
** File description:
** call my_putsr passing arguments with va_arg
*/

#include "lib.h"

void my_va_putstr(va_list ap)
{
    my_putstr(va_arg(ap, char *));
}