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
    pos_button = sfSprite_getPosition(game->menu->button[n].sprite);
    rec_button.x = pos_button.x + 147;
    rec_button.y = pos_button.y + 148;
    if (pos_mouse.x >= pos_button.x && pos_mouse.x <= rec_button.x
        && pos_mouse.y >= pos_button.y && pos_mouse.y <= rec_button.y) {
        choice_menu(window, game, n);
    }
}

void choice_menu(sfRenderWindow *window, game_t *game, int n)
{
    switch(n) {
        case 0://PLAY
            break;
        case 1://INFO
            break;
        case 2://EXIT
            sfRenderWindow_close(window);
            break;
        case 3://SETTINGS
            break;
    }
}