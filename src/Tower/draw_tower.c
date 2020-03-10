/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** draw_tower.c
*/

#include "../fonctions.h"

void display_tower(sfRenderWindow *window, game_t *game)
{
    sfRenderWindow_drawSprite(window,
                            game->play->tower_basic[0].body->sprite, NULL);
    sfRenderWindow_drawSprite(window,
                            game->play->tower_slow[0].body->sprite, NULL);
    sfRenderWindow_drawSprite(window,
                            game->play->tower_wall[0].body->sprite, NULL);
    sfRenderWindow_drawSprite(window,
                            game->play->tower_profit[0].body->sprite, NULL);
}