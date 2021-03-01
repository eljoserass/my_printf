/*
** EPITECH PROJECT, 2020
** my_printf
** File description:
** structure of the function an the flag for that function
*/

#ifndef STRUCT_FLAG_H_
#define STRUCT_FLAG_H_

typedef struct struct_flag_s {
    void (*fn)(va_list);
    char flag;
} struct_flag_t;

#endif