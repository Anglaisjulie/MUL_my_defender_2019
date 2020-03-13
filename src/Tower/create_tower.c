/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** create_tower.c
*/

#include "../fonctions.h"

void create_tower(game_t *game)
{
    game->play->castle->life = 6;
    create_tower_basic(game);
    create_tower_profit(game);
    create_tower_wall(game);
    create_tower_slow(game);
}