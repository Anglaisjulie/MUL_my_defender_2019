/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** malloc_game.c
*/

#include "fonctions.h"

#include "fonctions.h"

int game_malloc_menu(game_t *game)
{
    game->menu = malloc(sizeof(menu_t));
    if (game->menu == NULL)
        return (84);
    game->menu->obj = malloc(sizeof(object_t));
    if (game->menu->obj == NULL)
        return (84);
    game->menu->obj->background = malloc(sizeof(basicobject_t));
    if (game->menu->obj->background == NULL)
        return (84);
    game->menu->obj->button = malloc(sizeof(basicobject_t) * 4);
    if (game->menu->obj->button == NULL)
        return (84);
    game->menu->rect_button_a = malloc(sizeof(int) * 4);
    if (game->menu->rect_button_a == NULL)
        return (84);
    game->menu->rect_button_b = malloc(sizeof(int) * 4);
    if (game->menu->rect_button_b == NULL)
        return (84);
    return (0);
}

int game_malloc_play(game_t *game)
{
    game->play = malloc(sizeof(play_t));
    if (game->play == NULL)
        return (84);
    game->play->obj = malloc(sizeof(object_t));
    if (game->play->obj == NULL)
        return (84);
    game->play->obj->background = malloc(sizeof(basicobject_t));
    if (game->play->obj->background == NULL)
        return (84);
    return (0);
}