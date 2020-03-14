/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** malloc_game.c
*/

#include "../fonctions.h"

int game_malloc(game_t *game)
{
    game_malloc_play(game);
    game_malloc_tower(game);
    game_malloc_tower_body(game);
    game_malloc_tower_location(game);
    game_malloc_menu(game);
    game_malloc_text(game);
    game_malloc_enemy(game);
    return (0);
}
