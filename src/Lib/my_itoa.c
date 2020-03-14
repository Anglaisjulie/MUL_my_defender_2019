/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** my_itoa.c
*/

#include "../fonctions.h"

char *my_itoa(int nb)
{
    int length = 0;
    char *str = NULL;

    while (nb > 0) {
        nb = nb / 10;
        length++;
    }
    str = malloc(sizeof(char *) * length + 1);
    str[length] = '\0';
    while (length--) {
        str[length] = nb % 10 + '0';
        nb = nb / 10;
    }
    return (str);
}