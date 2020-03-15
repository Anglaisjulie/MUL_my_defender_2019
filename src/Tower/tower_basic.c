/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** tower.c
*/

#include "../fonctions.h"

basicobject_t *init_tower_basic
                            (basicobject_t *body, float x, float y, char *path)
{
    body->texture = sfTexture_createFromFile(path, NULL);
    body->sprite = sfSprite_create();
    sfSprite_setTexture(body->sprite, body->texture, 1);
    body->vector.x = x;
    body->vector.y = y;
    sfSprite_setPosition(body->sprite, body->vector);
    return (body);
}

void create_tower_basic(game_t *game)
{
    game->play->tower_basic[0].body = init_tower_basic
    (game->play->tower_basic[0].body, 1555.0, 0.0, "picture/dtls_basic.png");
    game->play->tower_basic[1].body = init_tower_basic
    (game->play->tower_basic[1].body, 68.0, 285.0, "picture/tower-tesla.png");
    game->play->tower_basic[2].body = init_tower_basic
    (game->play->tower_basic[2].body, 380.0, 250.0, "picture/tower-tesla.png");
    game->play->tower_basic[3].body = init_tower_basic
    (game->play->tower_basic[3].body, 740.0, 390.0, "picture/tower-tesla.png");
    game->play->tower_basic[4].body = init_tower_basic
    (game->play->tower_basic[4].body, 1090.0, 475.0, "picture/tower-tesla.png");
    game->play->tower_basic[5].body = init_tower_basic
    (game->play->tower_basic[5].body, 1285.0, 185.0, "picture/tower-tesla.png");
}