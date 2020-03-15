/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** create_clock.c
*/

#include "fonctions.h"

void create_clock(game_t *game)
{
    game->time->clock = sfClock_create();
    game->play->enemy->clock = sfClock_create();
    game->coin->clock = sfClock_create();
    game->time->time = sfClock_getElapsedTime(game->time->clock);
}