/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** malloc_menu.c
*/

#include "fonctions.h"

int game_malloc_menu(game_t *game)
{
    game->menu = malloc(sizeof(menu_t));
    if (game->menu == NULL)
        return (ERROR);
    game->menu->obj = malloc(sizeof(object_t));
    if (game->menu->obj == NULL)
        return (ERROR);
    game->menu->obj->background = malloc(sizeof(basicobject_t));
    if (game->menu->obj->background == NULL)
        return (ERROR);
    game->menu->obj->button = malloc(sizeof(basicobject_t) * 4);
    if (game->menu->obj->button == NULL)
        return (ERROR);
    game->menu->rect_button_a = malloc(sizeof(int) * 4);
    if (game->menu->rect_button_a == NULL)
        return (ERROR);
    game->menu->rect_button_b = malloc(sizeof(int) * 4);
    if (game->menu->rect_button_b == NULL)
        return (ERROR);
    return (0);
}