/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** game.c
*/

#include "fonctions.h"

void init_game(sfRenderWindow *window, game_t *game)
{
    game_malloc_menu(game);
    game_malloc_play(game);
    game_malloc_tower(game);
    malloc_tower_body(game);
    background_menu(window, game);
    create_button_menu(game);
    create_location_tower(game);
    create_tower(game);
    sfRenderWindow_setFramerateLimit(window, 30);
    game->menu->location = MENU;
}

int game_loop(sfRenderWindow *window, game_t *game)
{
    while (sfRenderWindow_isOpen(window)) {
        sfRenderWindow_clear(window, sfBlack);
        manage_event(window, game);
        option_menu_map(window, game);
        sfRenderWindow_display(window);
    }
    return (0);
}

void option_menu_map(sfRenderWindow *window, game_t *game)
{
    if (game->menu->location == MENU) {
        background_menu(window, game);
        button_same_mouse(window, game, PLAY);
        button_same_mouse(window, game, INFO);
        button_same_mouse(window, game, EXIT);
        button_same_mouse(window, game, SETTINGS);
        display_button_menu(window, game);
    }
    if (game->menu->location == PLAY) {
        background_play(window, game);
        display_location_tower(window, game);
        display_tower(window, game);
    }
    if (game->menu->location == INFO) {

    }
    if (game->menu->location == SETTINGS) {

    }
}