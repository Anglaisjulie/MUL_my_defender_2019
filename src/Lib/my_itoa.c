/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** my_itoa.c
*/

#include "../fonctions.h"

char *check_malloc(int size)
{
    char *str = NULL;

    if (!size)
        return (NULL);
    str = malloc(size);
    if (str == NULL)
        return (NULL);
    return (str);
}

char *my_itoa(int nb)
{
    int length = 0;
    char *str = NULL;
    int x = 0;

    x = nb;
    while (x > 0) {
        x /= 10;
        length++;
    }
    str = malloc(sizeof(char *) * length + 1);
    str[length] = '\0';
    length--;
    while (length >= 0) {
        str[length] = nb % 10 + '0';
        nb /= 10;
        length--;
    }
    return (str);
}