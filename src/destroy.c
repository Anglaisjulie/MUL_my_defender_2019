/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** destroy.c
*/

#include "fonctions.h"

void destroy_menu(menu_t *menu)
{
    sfTexture_destroy(menu->obj->button->texture);
    sfSprite_destroy(menu->obj->button->sprite);
    destroy_music_menu(menu);
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
    sfTexture_destroy(play->state->texture);
    sfSprite_destroy(play->state->sprite);
}

void destroy_enemy(enemy_t *enemy)
{
    sfTexture_destroy(enemy->body->texture);
    sfSprite_destroy(enemy->body->sprite);
    sfTexture_destroy(enemy->b_life->texture);
    sfSprite_destroy(enemy->b_life->sprite);
}

void destroy_castle(game_t *game)
{
    sfTexture_destroy(game->play->castle->body->texture);
    sfTexture_destroy(game->play->castle->heart->texture);
    sfSprite_destroy(game->play->castle->body->sprite);
    sfSprite_destroy(game->play->castle->heart->sprite);
    sfTexture_destroy(game->menu->htp->texture);
    sfSprite_destroy(game->menu->htp->sprite);
    sfTexture_destroy(game->menu->obj->background->texture);
    sfSprite_destroy(game->menu->obj->background->sprite);

}
//enemy, heart, castle
