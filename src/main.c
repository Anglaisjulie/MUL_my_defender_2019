/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** window.c
*/

#include "fonctions.h"

int main(void)
{
    sfRenderWindow *window;
    sfVideoMode mode = {1920, 1080, 32};
    game_t game = {0};

    window = sfRenderWindow_create(mode, "My Defender", sfDefaultStyle, NULL);
    init_game(window, &game);
    music_menu(&game);
    game_loop(window, &game);
    free_texture(&game);
    free_sprite(&game);
    destroy_music(&game);
    sfRenderWindow_destroy(window);
    return (0);
}
