/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** tower_profit.c
*/

#include "../fonctions.h"

basicobject_t *init_tower_profit
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

void create_tower_profit(game_t *game)
{
    game->play->tower_profit[0].body = init_tower_profit
    (game->play->tower_profit[0].body, 1555.0, 400.0,
                                                    "picture/dtls_profit.png");
    game->play->tower_profit[1].body = init_tower_profit
    (game->play->tower_profit[1].body, 68.0, 320.0, "picture/tower-canon.png");
    game->play->tower_profit[2].body = init_tower_profit
    (game->play->tower_profit[2].body, 380.0, 285.0, "picture/tower-canon.png");
    game->play->tower_profit[3].body = init_tower_profit
    (game->play->tower_profit[3].body, 740.0, 425.0, "picture/tower-canon.png");
    game->play->tower_profit[4].body = init_tower_profit
    (game->play->tower_profit[4].body, 1090.0, 510.0,
                                                    "picture/tower-canon.png");
    game->play->tower_profit[5].body = init_tower_profit
    (game->play->tower_profit[5].body, 1285.0, 220.0,
                                                    "picture/tower-canon.png");
}