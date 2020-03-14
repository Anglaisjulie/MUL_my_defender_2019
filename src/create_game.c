/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** create_game.c
*/

#include "fonctions.h"

void create_game(sfRenderWindow *window, game_t *game)
{
    game_malloc(game);
    background_menu(window, game);
    create_button_menu(game);
    create_background_play(game);
    create_location_tower(game);
    create_score(game);
    create_clock(game);
    create_tower(game);
    create_enemy(game->play->enemy);

}