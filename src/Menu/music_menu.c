/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** music_game.c
*/

#include "../fonctions.h"
#include <SFML/Audio.h>

void music_menu(menu_t *menu)
{
    menu->obj->music = sfMusic_createFromFile("music/music_menu.ogg");
    sfMusic_setLoop(menu->obj->music, sfTrue);
    sfMusic_play(menu->obj->music);
}

void destroy_music(menu_t *menu)
{
    sfMusic_destroy(menu->obj->music);
}

void music_game(play_t *play)
{
    play->obj->music = sfMusic_createFromFile("music/music_menu.ogg");
    sfMusic_setLoop(play->obj->music, sfTrue);
    sfMusic_play(play->obj->music);
}