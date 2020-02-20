/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** menu.c
*/

#include "fonctions.h"

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

    button[n].texture = sfTexture_createFromFile(path, NULL);
    button[n].sprite = sfSprite_create();
    sfSprite_setTexture(button[n].sprite, button[n].texture, 1);
    button[n].vector.x = x;
    button[n].vector.y = y;
    sfSprite_setPosition(button[n].sprite, button[n].vector);
    sfSprite_setTextureRect(button[n].sprite, button[n].rect);
    n++;
    return (button[n - 1]);
}

void create_button_menu(game_t *game)
{
    initialize_rect(game->menu->obj->button);
    game->menu->obj->button[0] = init_button(game->menu->obj->button,
                                        "picture/play.png", 761.0, 800.0);
    game->menu->obj->button[1] = init_button(game->menu->obj->button,
                                        "picture/Inf.png", 1540.0, 800.0);
    game->menu->obj->button[2] = init_button(game->menu->obj->button,
                                        "picture/Exi.png", 1700.0, 50.0);
    game->menu->obj->button[3] = init_button(game->menu->obj->button,
                                        "picture/Opt.png", 240.0, 800.0);
}

void display_button_menu(sfRenderWindow *window, game_t *game)
{
    sfRenderWindow_drawSprite(window, game->menu->obj->button[0].sprite, NULL);
    //sfRenderWindow_drawSprite(window, game->menu->obj->button[1].sprite, NULL);
    //sfRenderWindow_drawSprite(window, game->menu->obj->button[2].sprite, NULL);
    //sfRenderWindow_drawSprite(window, game->menu->obj->button[3].sprite, NULL);
}

void initialize_rect(basicobject_t *button)
{
    sfIntRect rect0 = {0, 0, 398, 106};

    button[0].rect = rect0;
    /*button[1].rect = {0, 0, 0, 0};
    button[2].rect = {0, 0, 0, 0};
    button[3].rect = {0, 0, 0, 0};*/
}