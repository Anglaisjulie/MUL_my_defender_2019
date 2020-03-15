/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** window.c
*/

#include "fonctions.h"

int main(int ac, char **argv)
{
    (void) argv;
    sfRenderWindow *window;
    sfVideoMode mode = {MAX_SCREEN_X, MAX_SCREEN_Y, 32};
    game_t game = {0};
    if (ac != 1)
        return (ERROR);
    window = sfRenderWindow_create(mode, "My Defender", sfDefaultStyle, NULL);
    init_game(window, &game);
    game_loop(window, &game);
    destroy_game(&game, window);
    return (0);
}
