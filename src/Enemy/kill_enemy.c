/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** kill_enemy.c
*/

#include "../fonctions.h"

void kill_enemy_with_castle(play_t *play, int n)
{
    sfVector2f position = sfSprite_getPosition(play->enemy[n].body->sprite);

    if (position.x == 1500) {
        play->enemy[n].life = 0;
        play->castle->life -= 1;
    }
    option_heart_one(play);
    option_heart_two(play);
    option_heart_three(play);
    for (int i = 0; i != NB_HEART; i++) {
        sfSprite_setTextureRect(play->castle->heart[i].sprite,
                                                play->castle->heart[i].rect);
    }
}

void damage_enemy(game_t *game)
{
    static int e = 0;

    for (int i = 0; i != 5 && e != NB_ENEMY; i++) {
        if (game->play->enemy[e].life == 0)
            e++;
        enemy_in_circle(game, i, e);
    }
}