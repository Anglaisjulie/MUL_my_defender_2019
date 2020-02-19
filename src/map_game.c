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
                                            ("picture/background.png", NULL);
    game->play->obj->background->sprite = sfSprite_create();
    sfSprite_setTexture(game->play->obj->background->sprite,
                        game->play->obj->background->texture, 1);
    game->play->obj->background->vector.x = 410;
    game->play->obj->background->vector.y = 0;
    sfSprite_setPosition(game->play->obj->background->sprite,
                                        game->play->obj->background->vector);
    sfRenderWindow_drawSprite(window,
                                game->play->obj->background->sprite, NULL);
}

basicobject_t init_button_game(game_t *game, char *path, float x, float y)
{
    static int n = 0;

    game->play->obj->button[n].texture =
                                        sfTexture_createFromFile(path, NULL);
    game->play->obj->button[n].sprite = sfSprite_create();
    sfSprite_setTexture(game->play->obj->button[n].sprite,
                                    game->play->obj->button[n].texture, 1);
    game->play->obj->button[n].vector.x = x;
    game->play->obj->button[n].vector.y = y;
    sfSprite_setPosition(game->play->obj->button[n].sprite,
                                        game->play->obj->button[n].vector);
    n++;
    return (game->play->obj->button[n - 1]);
}

void create_button_game(game_t *game)
{
    game->play->obj->button[0] = init_button(game, "picture/play.png",
                                                                461.0, 800.0);
    //game->play->obj->button[1] = init_button(game, "picture/Inf.png", 1540.0, 800.0);
    //game->play->obj->button[2] = init_button(game, "picture/Exi.png", 1700.0, 50.0);
    //game->play->obj->button[3] = init_button(game, "picture/Opt.png", 240.0, 800.0);
}

void display_button_game(sfRenderWindow *window, game_t *game)
{
    sfRenderWindow_drawSprite(window, game->play->obj->button[0].sprite, NULL);
    sfRenderWindow_drawSprite(window, game->play->obj->button[1].sprite, NULL);
    sfRenderWindow_drawSprite(window, game->play->obj->button[2].sprite, NULL);
    sfRenderWindow_drawSprite(window, game->play->obj->button[3].sprite, NULL);
}