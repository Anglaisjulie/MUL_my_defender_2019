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
            recovery_position_button(window, game, PLAY);
            recovery_position_button(window, game, INFO);
            recovery_position_button(window, game, EXIT);
            recovery_position_button(window, game, SETTINGS);
        }
    }
}
