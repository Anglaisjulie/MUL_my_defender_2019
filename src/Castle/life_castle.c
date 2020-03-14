/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** life_castle.c
*/

#include "../fonctions.h"

basicobject_t init_heart(castle_t *castle, float x, float y, int n)
{
    sfIntRect rect = {0, 0, 51, 51};
    castle->heart[n].texture = sfTexture_createFromFile
                                                ("picture/heart.png", NULL);
    castle->heart[n].sprite = sfSprite_create();
    sfSprite_setTexture(castle->heart[n].sprite, castle->heart[n].texture, 1);
    castle->heart[n].vector.x = x;
    castle->heart[n].vector.y = y;
    sfSprite_setPosition(castle->heart[n].sprite, castle->heart[n].vector);
    castle->heart[n].rect = rect;
    sfSprite_setTextureRect(castle->heart[n].sprite, castle->heart[n].rect);
    return (castle->heart[n]);
}

void create_heart(game_t *game)
{
    game->play->castle->heart[0] = init_heart
                                    (game->play->castle, 1450.0, 250.0, 0);
    game->play->castle->heart[1] = init_heart
                                    (game->play->castle, 1450.0, 300.0, 1);
    game->play->castle->heart[2] = init_heart
                                    (game->play->castle, 1450.0, 350.0, 2);
}

void display_life(sfRenderWindow *window, game_t *game)
{
    for (int i = 0; i != NB_HEART; i++) {
        sfRenderWindow_drawSprite
                            (window, game->play->castle->heart[i].sprite, NULL);
    }
}
