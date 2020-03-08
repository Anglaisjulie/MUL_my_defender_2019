/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** map_game.c
*/

#include "fonctions.h"

void background_play(sfRenderWindow *window, game_t *game)
{
    game->play->obj->background->texture = sfTexture_createFromFile
                                            ("picture/map2.png", NULL);
    game->play->obj->background->sprite = sfSprite_create();
    sfSprite_setTexture(game->play->obj->background->sprite,
                        game->play->obj->background->texture, 1);
    game->play->obj->background->vector.x = 0;
    game->play->obj->background->vector.y = 0;
    sfSprite_setPosition(game->play->obj->background->sprite,
                                        game->play->obj->background->vector);
    sfRenderWindow_drawSprite(window,
                                game->play->obj->background->sprite, NULL);
}

basicobject_t init_location_tower(basicobject_t *location, float x, float y)
{
    static int n = 0;

    location[n].texture = sfTexture_createFromFile("picture/check.png", NULL);
    location[n].sprite = sfSprite_create();
    sfSprite_setTexture(location[n].sprite, location[n].texture, 1);
    location[n].vector.x = x;
    location[n].vector.y = y;
    sfSprite_setPosition(location[n].sprite, location[n].vector);
    n++;
    return (location[n - 1]);
}

void create_location_tower(game_t *game)
{
    game->play->location[0] = init_location_tower
                                (game->play->location, 35.0, 355.0);
    game->play->location[1] = init_location_tower
                                (game->play->location, 345.0, 315.0);
    game->play->location[2] = init_location_tower
                                (game->play->location, 705.0, 455.0);
    game->play->location[3] = init_location_tower
                                (game->play->location, 1055.0, 540.0);
    game->play->location[4] = init_location_tower
                                (game->play->location, 1250.0, 250.0);
}

void display_location_tower(sfRenderWindow *window, game_t *game)
{
    if (game->play->tower_basic->activated == OK) {
        sfRenderWindow_drawSprite(window,
                                game->play->location[0].sprite, NULL);
        sfRenderWindow_drawSprite(window,
                                game->play->location[1].sprite, NULL);
        sfRenderWindow_drawSprite(window,
                                game->play->location[2].sprite, NULL);
        sfRenderWindow_drawSprite(window,
                                game->play->location[3].sprite, NULL);
        sfRenderWindow_drawSprite(window,
                                game->play->location[4].sprite, NULL);
    }
}