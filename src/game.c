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
    background_menu(window, game);
    game->menu->a = 0;
    game->menu->b = 0;
    game->menu->rect_button_a[0] = 398;
    game->menu->rect_button_b[0] = 106;
    create_button_menu(game);
    sfRenderWindow_setFramerateLimit(window, 30);
    game->menu->location = -1;
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
    if (game->menu->location == -1) { //MENU
        background_menu(window, game);
        button_same_mouse(window, game, 0);
        display_button_menu(window, game);
    }
    if (game->menu->location == 0) { //PLAY
        background_play(window, game);
    }
    if (game->menu->location == 1) { //INFO

    }
    if (game->menu->location == 3) { //SETTINGS

    }
}