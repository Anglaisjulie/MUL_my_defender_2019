/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** ennemie.c
*/

#include "fonctions.h"

basicobject_t *init_ennemi(ennemi_t *ennemi, int n)
{
    sfIntRect rect = {0, 0, 266, 239};

    ennemi[n].body->texture = sfTexture_createFromFile
                                        ("picture/ennemi.png", NULL);
    ennemi[n].body->sprite = sfSprite_create();
    sfSprite_setTexture(ennemi[n].body->sprite, ennemi[n].body->texture, 1);
    ennemi[n].body->vector.x = 20;
    ennemi[n].body->vector.y = -200;
    sfSprite_setPosition(ennemi[n].body->sprite, ennemi[n].body->vector);
    ennemi[n].body->rect = rect;
    sfSprite_setTextureRect(ennemi[n].body->sprite, ennemi[n].body->rect);
    return (ennemi[n].body);
}