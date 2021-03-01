/*
** EPITECH PROJECT, 2020
** my_printf
** File description:
** function that print non-printable in oct
*/

#include "lib.h"

void my_fill_str_with_octa(int non_p)
{
    char octa[] = "000";
    int i = 2;
    int mod = 0;

    while (non_p > 0) {
        mod = non_p % 8;
        non_p /= 8;
        octa[i] = mod + 48;
        i--;
    }
    my_putchar('\\');
    my_putstr(octa);
}

void my_put_nonp_in_oct(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] <= 32 || str[i] >= 127)
            my_fill_str_with_octa(str[i]);
    my_putchar(str[i]);
    i++;
    }
}