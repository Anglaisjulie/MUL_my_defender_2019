/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** tower_wall.c
*/

#include "../fonctions.h"

basicobject_t *init_tower_wall
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

void create_tower_wall(game_t *game)
{
    game->play->tower_wall[0].body = init_tower_wall
    (game->play->tower_wall[0].body, 1650.0, 650.0, "picture/tower-magic.png");
    game->play->tower_wall[1].body = init_tower_wall
    (game->play->tower_wall[1].body, 68.0, 310.0, "picture/tower-magic.png");
    game->play->tower_wall[2].body = init_tower_wall
    (game->play->tower_wall[2].body, 380.0, 275.0, "picture/tower-magic.png");
    game->play->tower_wall[3].body = init_tower_wall
    (game->play->tower_wall[3].body, 740.0, 415.0, "picture/tower-magic.png");
    game->play->tower_wall[4].body = init_tower_wall
    (game->play->tower_wall[4].body, 1090.0, 500.0, "picture/tower-magic.png");
    game->play->tower_wall[5].body = init_tower_wall
    (game->play->tower_wall[5].body, 1285.0, 210.0, "picture/tower-magic.png");
}