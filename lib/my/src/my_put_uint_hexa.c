/*
** EPITECH PROJECT, 2020
** my_pritnf
** File description:
** print decimal to hexa
*/

#include "lib.h"

void print_hexa(char *hexa, int i)
{
    while (i > 0) {
        my_putchar(hexa[i - 2]);
        i--;
    }
}

int my_put_uint_hexa(unsigned int uint)
{
    int mod = 0;
    int i   = 0;
    char *hexa = malloc(sizeof(int) * i);

    if (hexa == NULL)
        return (84);
    while (uint > 0) {
        mod = uint % 16;
        if (mod < 10)
            mod += 48;
        else
            mod += 87;
        hexa[i - 1] = mod;
        i++;
        uint /= 16;
    }
    print_hexa(hexa, i);
    return (0);
}
