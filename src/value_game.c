/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** value_game.c
*/

#include "fonctions.h"

void define_value(game_t *game)
{
    game->menu->location = MENU;
    game->play->coin = 500;
    game->play->castle->life = 6;
    game->time->score = 0;
    game->coin->coin = 0;
}