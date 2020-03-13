/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** life_castle.c
*/

#include "../fonctions.h"

void create_life(castle_t *castle)
{
    sfIntRect rect = {0, 0, 300, 300};
    castle->heart->texture = sfTexture_createFromFile
                                                ("picture/heart.png", NULL);
    castle->heart->sprite = sfSprite_create();
    sfSprite_setTexture(castle->heart->sprite, castle->heart->texture, 1);
    castle->heart->vector.x = 1505;
    castle->heart->vector.y = 300;
    castle->heart->rect = rect;
    sfSprite_setPosition(castle->heart->sprite, castle->heart->vector);
}

void display_heart(sfRenderWindow *window, game_t *game, sfClock *clock)
{
    if (game->play->castle->heart->rect.left == 900)
        game->play->castle->heart->rect.left = 0;
    else
        game->play->castle->heart->rect.left += 300;
    sfSprite_setTextureRect(game->play->castle->heart->sprite,
                                            game->play->castle->heart->rect);
    sfClock_restart(clock);
    sfRenderWindow_drawSprite(window, game->play->castle->heart->sprite, NULL);
}