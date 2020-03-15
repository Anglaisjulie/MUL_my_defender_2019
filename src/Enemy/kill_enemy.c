/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** kill_enemy.c
*/

#include "../fonctions.h"

void kill_enemy_with_castle(play_t *play, times_t *time, int n)
{
    sfVector2f position = sfSprite_getPosition(play->enemy[n].body->sprite);

    if (position.x == 1500) {
        play->enemy[n].life = 0;
        play->castle->life -= 1;
    }
    remove_life_enemy(play, time, n);
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
        if (game->play->enemy[e].life <= 0)
            e++;
        enemy_in_circle(game, i, e);

    }
}

void remove_life_enemy(play_t *play, times_t *time, int n)
{
    if (play->enemy[n].life == 500)
        play->enemy[n].b_life->rect.left = 0;
    if (play->enemy[n].life <= 400)
        play->enemy[n].b_life->rect.left = 74;
    if (play->enemy[n].life <= 300)
        play->enemy[n].b_life->rect.left = 148;
    if (play->enemy[n].life <= 200)
        play->enemy[n].b_life->rect.left = 222;
    if (play->enemy[n].life <= 100)
        play->enemy[n].b_life->rect.left = 296;
    if (play->enemy[n].life <= 0 && play->enemy[n].life != SUPP) {
        play->enemy[n].life = SUPP;
        play->coin += 15;
        time->score += 25;
        play->enemy[n].body->vector.x = 0;
        sfSprite_setPosition(play->enemy[n].body->sprite,
                                                play->enemy[n].body->vector);
    }
    sfSprite_setTextureRect(play->enemy[n].b_life->sprite,
                                            play->enemy[n].b_life->rect);
}