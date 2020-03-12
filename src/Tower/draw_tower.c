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

void check_draw_tower(sfRenderWindow *window, game_t *game)
{
    for (int i = 1; i != 6; i++) {
        if (game->play->tower_basic[i].activated == DRAW) {
            sfRenderWindow_drawSprite(window,
                            game->play->tower_basic[i].body->sprite, NULL);
        }
        if (game->play->tower_slow[i].activated == DRAW) {
            sfRenderWindow_drawSprite(window,
                            game->play->tower_slow[i].body->sprite, NULL);
        }
        if (game->play->tower_wall[i].activated == DRAW) {
            sfRenderWindow_drawSprite(window,
                            game->play->tower_wall[i].body->sprite, NULL);
        }
        if (game->play->tower_profit[i].activated == DRAW) {
            sfRenderWindow_drawSprite(window,
                            game->play->tower_profit[i].body->sprite, NULL);
        }
    }
}