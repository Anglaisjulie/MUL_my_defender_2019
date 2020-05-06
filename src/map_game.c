/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** map_game.c
*/

#include "fonctions.h"

void create_background_play(game_t *game)
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
    create_castle(game->play->castle);
}

void display_background_play(sfRenderWindow *window, game_t *game)
{
    sfRenderWindow_drawSprite
                            (window, game->play->obj->background->sprite, NULL);
}
