/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** create_castle.c
*/

#include "../fonctions.h"

void create_castle(castle_t *castle)
{
    castle->body->texture = sfTexture_createFromFile
                                                ("picture/castle.png", NULL);
    castle->body->sprite = sfSprite_create();
    sfSprite_setTexture(castle->body->sprite, castle->body->texture, 1);
    castle->body->vector.x = 1505;
    castle->body->vector.y = 300;
    sfSprite_setPosition(castle->body->sprite, castle->body->vector);
}

void display_castle(sfRenderWindow *window, game_t *game)
{
    sfRenderWindow_drawSprite
                            (window, game->play->castle->body->sprite, NULL);
}