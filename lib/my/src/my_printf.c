/*
** EPITECH PROJECT, 2020
** my_printf
** File description:
** my_printf principal function
*/

#include "lib.h"

int my_printf(char const *format, ...)
{
    va_list ap;
    int i = 0;

    va_start(ap, format);
    while (format[i] != '\0') {
        if (format[i] == '%') {
            i++;
            my_flagcmp(ap, format[i]);
        } else
            my_putchar(format[i]);
    i++;
    }
    va_end(ap);
    return (0);
}