/*
** EPITECH PROJECT, 2020
** my_printf
** File description:
** main
*/

#include <stdio.h>
#include "my_printf.h"
#include "lib.h"

int main(void)
{
    char str[] = "toto";
    str[1] = 127;
    unsigned int a = 4294967295;
    my_printf("hola %S estas %d %u\n%X\n", str, 2147483647, a, a);
    return 0;
}