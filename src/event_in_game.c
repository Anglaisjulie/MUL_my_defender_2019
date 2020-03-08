/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** event_in_game.c
*/

#include "fonctions.h"

void check_hitbox_tower(sfRenderWindow *window, game_t *game)
{
    sfVector2i pos_mouse;
    sfVector2f pos_tower;
    sfVector2f rec_tower;

    pos_mouse = sfMouse_getPositionRenderWindow(window);
    pos_tower = sfSprite_getPosition(game->play->tower_basic->body[0].sprite);
    rec_tower.x = pos_tower.x + 121;
    rec_tower.y = pos_tower.y + 222;
    if (pos_mouse.x >= pos_tower.x && pos_mouse.x <= rec_tower.x
        && pos_mouse.y >= pos_tower.y && pos_mouse.y <= rec_tower.y)
            game->play->tower_basic = OK;
}