/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** b_life_enemy.c
*/

#include "../fonctions.h"

basicobject_t *init_life_enemy(enemy_t *enemy, int n)
{
    sfIntRect rect = {0, 0, 109, 38};

    enemy[n].b_life->texture = sfTexture_createFromFile
                                        ("picture/life.png", NULL);
    enemy[n].b_life->sprite = sfSprite_create();
    sfSprite_setTexture(enemy[n].b_life->sprite, enemy[n].b_life->texture, 1);
    enemy[n].b_life->vector.x = 50 * (- n);
    enemy[n].b_life->vector.y = 500;
    sfSprite_setPosition(enemy[n].b_life->sprite, enemy[n].b_life->vector);
    enemy[n].b_life->rect = rect;
    sfSprite_setTextureRect(enemy[n].b_life->sprite, enemy[n].b_life->rect);
    enemy[n].life = 100;
    return (enemy[n].b_life);
}

void create_life_enemy(enemy_t *enemy)
{
    for (int i = 0; i != NB_ENEMY; i++)
        enemy[i].b_life = init_life_enemy(enemy, i);
}