/*
** EPITECH PROJECT, 2020
** emacs
** File description:
** return the size of an array of strings
*/

#include <stdlib.h>

int my_arraylen(char **array)
{
    int i = 0;

    while (array[i] != NULL)
        i++;
    return (i);
}