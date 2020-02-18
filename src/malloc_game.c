/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** malloc_game.c
*/

#include "fonctions.h"

#include "fonctions.h"

int game_malloc(game_t *game)
{
    game->menu = malloc(sizeof(init_menu_t));
    if (game->menu == NULL)
        return (84);
    game->menu->background = malloc(sizeof(basicobject_t));
    if (game->menu->background == NULL)
        return (84);
    game->menu->button = malloc(sizeof(basicobject_t) * 4);
    if (game->menu->button == NULL)
        return (84);
    return (0);
}