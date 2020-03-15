/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** enemy_in_circle.c
*/

#include "../fonctions.h"

void enemy_in_circle(game_t *game, int n, int e)
{
    sfVector2f pos_circle;
    sfVector2f rec_circle;
    sfVector2f pos_enemy;

    if (e == NB_ENEMY)
        return;
    pos_circle = sfSprite_getPosition
                                (game->play->location[n].circle->sprite);
    pos_enemy = sfSprite_getPosition
                                (game->play->enemy[e].body->sprite);
    rec_circle.x = pos_circle.x + 388;
    rec_circle.y = pos_circle.y + 378;
    if ((pos_circle.x <= pos_enemy.x) && (pos_circle.y <= pos_enemy.y)
        && (rec_circle.x >= pos_enemy.x) && (rec_circle.y >= pos_enemy.y)
        && game->play->location[n].full == KO) {
        type_of_damage(game, n, e);
    }
}

void type_of_damage(game_t *game, int n, int e)
{
    if (game->play->location[n].type == BASIC)
        game->play->enemy[e].life -= 1;
    if (game->play->location[n].type == PROFIT)
        game->play->enemy[e].life -= 4;
    if (game->play->location[n].type == SLOW)
        game->play->enemy[e].life -= 2;
    if (game->play->location[n].type == WALL)
        game->play->enemy[e].life -= 5;
}