/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** destroy.c
*/

#include "fonctions.h"

void free_texture(game_t *game)
{
    sfTexture_destroy(game->menu->background->texture);
    sfTexture_destroy(game->menu->button->texture);
}

void free_sprite(game_t *game)
{
    sfSprite_destroy(game->menu->background->sprite);
    sfSprite_destroy(game->menu->button->sprite);
}