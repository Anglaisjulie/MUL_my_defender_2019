/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** enemy_path.c
*/

#include "../fonctions.h"

void enemy_move(enemy_t *enemy, int n)
{
    sfVector2f position = sfSprite_getPosition(enemy[n].body->sprite);
    path_x(enemy, position, n);
    path_y(enemy, position, n);
    sfSprite_setPosition(enemy[n].body->sprite, enemy[n].body->vector);
}

void path_x(enemy_t *enemy, sfVector2f position, int n)
{
    if ((position.x < 210)
        || (position.y == 200 && position.x < 520)
        || (position.y == 600 && position.x < 935)
        || (position.y == 400 && position.x < 1500 && position.x > 800)) {
        enemy[n].body->vector.x += 1;
        enemy[n].body->vector.y += 0;
    }
}

void path_y(enemy_t *enemy, sfVector2f position, int n)
{
    if ((position.y > 200 && position.x == 210)
        || (position.y > 400 && position.x == 935)) {
        enemy[n].body->vector.x += 0;
        enemy[n].body->vector.y += -1;
    }
    if (position.y < 600 && position.x == 520) {
        enemy[n].body->vector.x += 0;
        enemy[n].body->vector.y += 1;
    }
}