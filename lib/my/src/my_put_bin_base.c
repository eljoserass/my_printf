/*
** EPITECH PROJECT, 2020
** my_printf
** File description:
** function that converts a unsigned int to binary
*/

#include "lib.h"

void my_put_bin_base(unsigned int nb)
{
    int res = 0;

    while (nb > 0) {
        res = nb % 2;
        nb /= 2;
        my_put_nbr(res);
    }
}
