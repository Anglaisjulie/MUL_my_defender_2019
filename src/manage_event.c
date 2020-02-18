/*
** EPITECH PROJECT, 2019
** MUL_my_hunter_2019
** File description:
** close_window.c
*/

#include "fonctions.h"

void manage_event(sfRenderWindow *window, game_t *game)
{
    sfEvent event;

    while (sfRenderWindow_pollEvent(window, &event)) {
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(window);
        if (event.type == sfEvtMouseButtonReleased) {
            recovery_position_button(window, game, 0);
            recovery_position_button(window, game, 1);
            recovery_position_button(window, game, 2);
            recovery_position_button(window, game, 3);
        }
    }
}
