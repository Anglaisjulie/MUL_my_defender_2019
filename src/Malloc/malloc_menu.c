/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** malloc_menu.c
*/

#include "../fonctions.h"

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
    game->menu->obj->button = malloc(sizeof(basicobject_t) * NB_BUTTON);
    if (game->menu->obj->button == NULL)
        return (ERROR);
    game->menu->rect_button_a = malloc(sizeof(int) * NB_BUTTON);
    if (game->menu->rect_button_a == NULL)
        return (ERROR);
    game->menu->rect_button_b = malloc(sizeof(int) * NB_BUTTON);
    if (game->menu->rect_button_b == NULL)
        return (ERROR);
    return (0);
}

int game_malloc_htp(game_t *game)
{
    game->menu->htp = malloc(sizeof(basicobject_t));
    if (game->menu->htp == NULL)
        return (ERROR);
    return (0);
}