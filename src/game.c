/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** game.c
*/

#include "fonctions.h"

void init_game(sfRenderWindow *window, game_t *game)
{
    game_malloc(game);
    background_menu(window, game);
    create_button_menu(game);
    sfRenderWindow_setFramerateLimit(window, 30);
}

int game_loop(sfRenderWindow *window, game_t *game)
{
    while (sfRenderWindow_isOpen(window)) {
        sfRenderWindow_clear(window, sfBlack);
        manage_event(window, game);
        background_menu(window, game);
        display_button_menu(window, game);
        sfRenderWindow_display(window);
    }
    return (0);
}