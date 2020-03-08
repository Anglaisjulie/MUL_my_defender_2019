/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** tower.c
*/

#include "fonctions.h"

basicobject_t init_tower(basicobject_t *body, float x, float y, char *path)
{
    static int n = 0;

    body[n].texture = sfTexture_createFromFile(path, NULL);
    body[n].sprite = sfSprite_create();
    sfSprite_setTexture(body[n].sprite, body[n].texture, 1);
    body[n].vector.x = x;
    body[n].vector.y = y;
    sfSprite_setPosition(body[n].sprite, body[n].vector);
    n++;
    return (body[n - 1]);
}

void create_tower(game_t *game)
{
    game->play->tower_basic->body[0] = init_tower
    (game->play->tower_basic->body, 1600.0, 50.0, "picture/tower-tesla.png");
    game->play->tower_slow->body[0] = init_tower
    (game->play->tower_slow->body, -17.0, 230.0, "picture/tower-ice.png");
    game->play->tower_wall->body[0] = init_tower
    (game->play->tower_wall->body, 287.0, 185.0, "picture/tower-magic.png");
    game->play->tower_profit->body[0] = init_tower
    (game->play->tower_profit->body, 650.0, 325.0, "picture/tower-canon.png");
}

void display_tower(sfRenderWindow *window, game_t *game)
{
    sfRenderWindow_drawSprite(window,
                            game->play->tower_basic->body[0].sprite, NULL);
    sfRenderWindow_drawSprite(window,
                            game->play->tower_slow->body[0].sprite, NULL);
    sfRenderWindow_drawSprite(window,
                            game->play->tower_wall->body[0].sprite, NULL);
    sfRenderWindow_drawSprite(window,
                            game->play->tower_profit->body[0].sprite, NULL);
}