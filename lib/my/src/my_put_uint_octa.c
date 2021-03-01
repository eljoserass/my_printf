/*
** EPITECH PROJECT, 2020
** my_printf
** File description:
** print a unsigned int in octal base
*/

#include "lib.h"

int my_put_uint_octa(unsigned int uint)
{
    int mod = 0;
    int i   = 0;
    int *octa = malloc(sizeof(int) * i);

    if (octa == NULL)
        return (84);

    while (uint > 0) {
        mod = uint % 8;
        uint /= 8;
        octa[i - 1] = mod;
        i++;
    }
    while (i > 0) {
        my_put_nbr(octa[i - 2]);
        i--;
    }
    return (0);
}