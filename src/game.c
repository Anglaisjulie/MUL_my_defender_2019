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
    create_game(window, game);
    define_value(game);
    sfRenderWindow_setFramerateLimit(window, 30);
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

void destroy_game(game_t *game, sfRenderWindow *window)
{
    destroy_tower(game->play);
    destroy_basic_element_of_play(game->play);
    destroy_enemy(game->play->enemy);
    destroy_castle(game);
    sfRenderWindow_destroy(window);
}