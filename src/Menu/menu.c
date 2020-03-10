/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** menu.c
*/

#include "../fonctions.h"

void background_menu(sfRenderWindow *window, game_t *game)
{
    game->menu->obj->background->texture =
                            sfTexture_createFromFile("picture/menu2.jpg", NULL);
    game->menu->obj->background->sprite = sfSprite_create();
    sfSprite_setTexture(game->menu->obj->background->sprite,
                                    game->menu->obj->background->texture, 1);
    sfRenderWindow_drawSprite(window, game->menu->obj->background->sprite,
                                                                        NULL);
}

basicobject_t init_button(basicobject_t *button, char *path, float x, float y)
{
    static int n = 0;
    sfIntRect rect = {0, 0, 398, 106};

    button[n].texture = sfTexture_createFromFile(path, NULL);
    button[n].sprite = sfSprite_create();
    sfSprite_setTexture(button[n].sprite, button[n].texture, 1);
    button[n].vector.x = x;
    button[n].vector.y = y;
    sfSprite_setPosition(button[n].sprite, button[n].vector);
    button[n].rect = rect;
    sfSprite_setTextureRect(button[n].sprite, button[n].rect);
    n++;
    return (button[n - 1]);
}

void create_button_menu(game_t *game)
{
    game->menu->obj->button[PLAY] = init_button(game->menu->obj->button,
                                        "picture/play.png", 761.0, 850.0);
    game->menu->obj->button[INFO] = init_button(game->menu->obj->button,
                                        "picture/Inf.png", 1461.0, 800.0);
    game->menu->obj->button[EXIT] = init_button(game->menu->obj->button,
                                        "picture/Exi.png", 1461.0, 50.0);
    game->menu->obj->button[SETTINGS] = init_button(game->menu->obj->button,
                                        "picture/Opt.png", 71.0, 800.0);
}

void display_button_menu(sfRenderWindow *window, game_t *game)
{
    sfRenderWindow_drawSprite(window,
                            game->menu->obj->button[PLAY].sprite, NULL);
    sfRenderWindow_drawSprite(window,
                            game->menu->obj->button[INFO].sprite, NULL);
    sfRenderWindow_drawSprite(window,
                            game->menu->obj->button[EXIT].sprite, NULL);
    sfRenderWindow_drawSprite(window,
                            game->menu->obj->button[SETTINGS].sprite, NULL);
}