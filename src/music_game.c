/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** music_game.c
*/

#include "fonctions.h"
#include <SFML/Audio.h>

void music_menu(game_t *game)
{
    game->menu->obj->music = sfMusic_createFromFile("music/music_menu.ogg");
    sfMusic_setLoop(game->menu->obj->music, sfTrue);
    sfMusic_play(game->menu->obj->music);
}

void destroy_music(game_t *game)
{
    sfMusic_destroy(game->menu->obj->music);
}