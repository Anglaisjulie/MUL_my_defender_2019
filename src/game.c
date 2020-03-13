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
    game_malloc_tower_body(game);
    game_malloc_tower_location(game);
    malloc_text(game);
    background_menu(window, game);
    create_button_menu(game);
    create_location_tower(game);
    draw_score(game);
    upgrade_score(game);
    create_tower(game);
    sfRenderWindow_setFramerateLimit(window, 30);
    game->menu->location = MENU;
    game->play->coin = 500;
    game->time->score = 0;
}

int game_loop(sfRenderWindow *window, game_t *game)
{
    while (sfRenderWindow_isOpen(window)) {
        sfRenderWindow_clear(window, sfBlack);
        manage_event(window, game);
        option_menu_map(window, game);
        sfRenderWindow_drawText(window, game->score->score, NULL);
        sfRenderWindow_drawText(window, game->score->nb_score, NULL);
        sfRenderWindow_display(window);
    }
    return (0);
}

void destroy_game(game_t *game, sfRenderWindow *window)
{
    destroy_tower(game->play);
    destroy_basic_element_of_play(game->play);
    sfRenderWindow_destroy(window);
}