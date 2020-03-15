/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** destroy.c
*/

#include "fonctions.h"

void destroy_menu(menu_t *menu)
{
    sfTexture_destroy(menu->obj->background->texture);
    sfTexture_destroy(menu->obj->button->texture);
    sfSprite_destroy(menu->obj->background->sprite);
    sfSprite_destroy(menu->obj->button->sprite);
    destroy_music(menu);
}

void destroy_tower(play_t *play)
{
    sfTexture_destroy(play->tower_basic->body->texture);
    sfTexture_destroy(play->tower_slow->body->texture);
    sfTexture_destroy(play->tower_wall->body->texture);
    sfTexture_destroy(play->tower_profit->body->texture);
    sfSprite_destroy(play->tower_basic->body->sprite);
    sfSprite_destroy(play->tower_slow->body->sprite);
    sfSprite_destroy(play->tower_wall->body->sprite);
    sfSprite_destroy(play->tower_profit->body->sprite);
}

void destroy_basic_element_of_play(play_t *play)
{
    sfTexture_destroy(play->obj->background->texture);
    sfTexture_destroy(play->location->tower->texture);
    sfTexture_destroy(play->location->circle->texture);
    sfSprite_destroy(play->obj->background->sprite);
    sfSprite_destroy(play->location->tower->sprite);
    sfSprite_destroy(play->location->circle->sprite);
}

void destroy_enemy(enemy_t *enemy)
{
    sfTexture_destroy(enemy->body->texture);
    sfSprite_destroy(enemy->body->sprite);
}

void destroy_castle(castle_t *castle)
{
    sfTexture_destroy(castle->body->texture);
    sfTexture_destroy(castle->heart->texture);
    sfSprite_destroy(castle->body->sprite);
    sfSprite_destroy(castle->heart->sprite);

}
//enemy, heart, castle
