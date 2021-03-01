/*
** EPITECH PROJECT, 2020
** my_printf
** File description:
** launch the function with it respective flag
*/

#include "lib.h"

void my_flagcmp(va_list ap, char flag)
{
    struct_flag_t *fn_array = my_fill_fn_array();
    int i = 0;

    while (fn_array[i].fn != NULL) {
        if (fn_array[i].flag == flag)
            fn_array[i].fn(ap);
        i++;
    }
}