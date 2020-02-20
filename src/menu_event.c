/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** menu_event.c
*/

#include "fonctions.h"

void recovery_position_button(sfRenderWindow *window, game_t *game, int n)
{
    sfVector2i pos_mouse;
    sfVector2f pos_button;
    sfVector2f rec_button;

    pos_mouse = sfMouse_getPositionRenderWindow(window);
    pos_button = sfSprite_getPosition(game->menu->obj->button[n].sprite);
    rec_button.x = pos_button.x + 374;
    rec_button.y = pos_button.y + 106;
    if (pos_mouse.x >= pos_button.x && pos_mouse.x <= rec_button.x
        && pos_mouse.y >= pos_button.y && pos_mouse.y <= rec_button.y) {
        choice_menu(window, game, n);
    }
}

void choice_menu(sfRenderWindow *window, game_t *game, int n)
{
    switch(n) {
        case 0://PLAY
            game->menu->location = 0;
            break;
        case 1://INFO
            game->menu->location = 1;
            break;
        case 2://EXIT
            sfRenderWindow_close(window);
            break;
        case 3://SETTINGS
            game->menu->location = 3;
            break;
    }
}

void button_same_mouse(sfRenderWindow *window, game_t *game, int n)
{
    sfVector2i pos_mouse;
    sfVector2f pos_button;
    sfVector2f rec_button;

    pos_mouse = sfMouse_getPositionRenderWindow(window);
    pos_button = sfSprite_getPosition(game->menu->obj->button[n].sprite);
    rec_button.x = pos_button.x + 374;
    rec_button.y = pos_button.y + 106;
    if (pos_mouse.x >= pos_button.x && pos_mouse.x <= rec_button.x
        && pos_mouse.y >= pos_button.y && pos_mouse.y <= rec_button.y) {
        game->menu->obj->button[0].rect.left = 398;
        /*game->menu->obj->button[1].rect = {0, 0, 0, 0};
        game->menu->obj->button[2].rect = {0, 0, 0, 0};
        game->menu->obj->button[3].rect = {0, 0, 0, 0};*/
        sfSprite_setTextureRect(game->menu->obj->button[n].sprite,
                                            game->menu->obj->button[n].rect);
    } else {
        game->menu->obj->button[0].rect.left = 0;
        /*game->menu->obj->button[1].rect = {0, 0, 0, 0};
        game->menu->obj->button[2].rect = {0, 0, 0, 0};
        game->menu->obj->button[3].rect = {0, 0, 0, 0};*/
        sfSprite_setTextureRect(game->menu->obj->button[n].sprite,
                                            game->menu->obj->button[n].rect);

    }

}