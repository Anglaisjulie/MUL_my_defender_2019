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
        case 0:
            game->menu->location = PLAY;
            break;
        case 1:
            game->menu->location = INFO;
            break;
        case 2:
            sfRenderWindow_close(window);
            break;
        case 3:
            game->menu->location = SETTINGS;
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
        game->menu->obj->button[0].rect.left = ON_BUTTON;
        game->menu->obj->button[1].rect.left = ON_BUTTON;
        game->menu->obj->button[2].rect.left = ON_BUTTON;
        game->menu->obj->button[3].rect.left = ON_BUTTON;
        sfSprite_setTextureRect(game->menu->obj->button[n].sprite,
                                            game->menu->obj->button[n].rect);
    } else {
        game->menu->obj->button[0].rect.left = OUTSIDE_BUTTON;
        game->menu->obj->button[1].rect.left = OUTSIDE_BUTTON;
        game->menu->obj->button[2].rect.left = OUTSIDE_BUTTON;
        game->menu->obj->button[3].rect.left = OUTSIDE_BUTTON;
        sfSprite_setTextureRect(game->menu->obj->button[n].sprite,
                                            game->menu->obj->button[n].rect);

    }

}