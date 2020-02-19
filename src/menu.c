/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** menu.c
*/

#include "fonctions.h"

void background_menu(sfRenderWindow *window, game_t *game)
{
    game->menu->obj->background->texture = sfTexture_createFromFile
                                                    ("picture/menu2.jpg", NULL);
    game->menu->obj->background->sprite = sfSprite_create();
    sfSprite_setTexture(game->menu->obj->background->sprite,
                        game->menu->obj->background->texture, 1);
    sfRenderWindow_drawSprite(window,
                                    game->menu->obj->background->sprite, NULL);
}

basicobject_t init_button(game_t *game, char *path, float x, float y)
{
    static int n = 0;
    sfIntRect rect = {0, 0, game->menu->rect_button_a[n],
                                                game->menu->rect_button_b[n]};

    game->menu->obj->button[n].texture = sfTexture_createFromFile(path, NULL);
    game->menu->obj->button[n].sprite = sfSprite_create();
    sfSprite_setTexture(game->menu->obj->button[n].sprite,
                                        game->menu->obj->button[n].texture, 1);
    game->menu->obj->button[n].vector.x = x;
    game->menu->obj->button[n].vector.y = y;
    sfSprite_setPosition(game->menu->obj->button[n].sprite,
                                            game->menu->obj->button[n].vector);
    game->menu->obj->button[n].rect = rect;
    sfSprite_setTextureRect(game->menu->obj->button[n].sprite,
                                            game->menu->obj->button[n].rect);
    n++;
    return (game->menu->obj->button[n - 1]);
}

void create_button_menu(game_t *game)
{
    game->menu->obj->button[0] = init_button(game,
                                            "picture/play.png", 761.0, 800.0);
    game->menu->obj->button[1] = init_button(game,
                                            "picture/Inf.png", 1540.0, 800.0);
    game->menu->obj->button[2] = init_button(game,
                                            "picture/Exi.png", 1700.0, 50.0);
    game->menu->obj->button[3] = init_button(game,
                                            "picture/Opt.png", 240.0, 800.0);
}

void display_button_menu(sfRenderWindow *window, game_t *game)
{
    sfRenderWindow_drawSprite(window, game->menu->obj->button[0].sprite, NULL);
    //sfRenderWindow_drawSprite(window, game->menu->obj->button[1].sprite, NULL);
    //sfRenderWindow_drawSprite(window, game->menu->obj->button[2].sprite, NULL);
    //sfRenderWindow_drawSprite(window, game->menu->obj->button[3].sprite, NULL);
}
