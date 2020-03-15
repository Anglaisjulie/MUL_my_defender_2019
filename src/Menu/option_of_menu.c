/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** option_of_menu.c
*/

#include "../fonctions.h"

void option_menu_map(sfRenderWindow *window, game_t *game)
{
    static int start = 0;

    if (game->menu->location == MENU) {
        action_menu(window, game, start);
        start = 1;
    }
    if (game->menu->location == PLAY) {
        action_play(window, game);
    }
    if (game->menu->location == INFO) {
    }
    if (game->menu->location == SETTINGS) {
    }
}

void action_menu(sfRenderWindow *window, game_t *game, int start)
{
    if (start == 0)
        music_menu(game->menu);
    background_menu(window, game);
    button_same_mouse(window, game, PLAY);
    button_same_mouse(window, game, INFO);
    button_same_mouse(window, game, EXIT);
    button_same_mouse(window, game, SETTINGS);
    display_button_menu(window, game);
}

void action_play(sfRenderWindow *window, game_t *game)
{
    display_background_play(window, game);
    damage_enemy(game);
    display_enemy(window, game);
    display_castle(window, game);
    display_location_tower(window, game);
    display_circle(window, game);
    display_tower(window, game);
    check_draw_tower(window, game);
    display_text(window, game);
    display_life(window, game);
    upgrade_score(game);
}