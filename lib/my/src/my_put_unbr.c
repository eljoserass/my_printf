/*
** EPITECH PROJECT, 2020
** my_printf
** File description:
** print a unsigned decimal number
*/

#include "lib.h"

void my_put_unbr(unsigned int nb)
{
    int d = 0;

    if (nb >= 10) {
        d = (nb % 10);
        nb = (nb - d) / 10;
        my_put_nbr(nb);
        my_putchar(48 + d);
    } else {
        my_putchar(48 + nb % 10);
    }
}