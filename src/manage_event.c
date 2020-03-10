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
            manage_plan(window, game);
        }
    }
}

void manage_plan(sfRenderWindow *window, game_t *game)
{
    if (game->menu->location == MENU) {
        recovery_position_button(window, game, PLAY);
        recovery_position_button(window, game, INFO);
        recovery_position_button(window, game, EXIT);
        recovery_position_button(window, game, SETTINGS);
    }
    if (game->menu->location == PLAY)
        check_hitbox_tower_basic(window, game);
        check_hitbox_tower_profit(window, game);
        check_hitbox_tower_slow(window, game);
        check_hitbox_tower_wall(window, game);
}