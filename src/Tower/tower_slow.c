/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** tower_slow.c
*/

#include "../fonctions.h"

basicobject_t *init_tower_slow
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

void create_tower_slow(game_t *game)
{
    game->play->tower_slow[0].body = init_tower_slow
    (game->play->tower_slow[0].body, 1555.0, 200.0, "picture/dtls_slow.png");
    game->play->tower_slow[1].body = init_tower_slow
    (game->play->tower_slow[1].body, 68.0, 330.0, "picture/tower-ice.png");
    game->play->tower_slow[2].body = init_tower_slow
    (game->play->tower_slow[2].body, 380.0, 295.0, "picture/tower-ice.png");
    game->play->tower_slow[3].body = init_tower_slow
    (game->play->tower_slow[3].body, 740.0, 435.0, "picture/tower-ice.png");
    game->play->tower_slow[4].body = init_tower_slow
    (game->play->tower_slow[4].body, 1090.0, 520.0, "picture/tower-ice.png");
    game->play->tower_slow[5].body = init_tower_slow
    (game->play->tower_slow[5].body, 1285.0, 230.0, "picture/tower-ice.png");
}