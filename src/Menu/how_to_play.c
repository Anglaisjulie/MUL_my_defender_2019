/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** how_to_play.c
*/

#include "../fonctions.h"

basicobject_t *init_htp(basicobject_t *htp)
{
    htp->texture = sfTexture_createFromFile("picture/how_to_play.png", NULL);
    htp->sprite = sfSprite_create();
    sfSprite_setTexture(htp->sprite, htp->texture, 1);
    htp->vector.x = 160;
    htp->vector.y = 90;
    sfSprite_setPosition(htp->sprite, htp->vector);
    return (htp);
}

void create_htp(game_t *game)
{
    game->menu->htp = init_htp(game->menu->htp);
}

void display_htp(sfRenderWindow *window, game_t *game)
{
    sfRenderWindow_drawSprite(window, game->menu->obj->background->sprite,
                                                                        NULL);
    sfRenderWindow_drawSprite(window, game->menu->htp->sprite, NULL);
}