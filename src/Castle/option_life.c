/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** option_life.c
*/

#include "../fonctions.h"

void option_heart_one(play_t *play)
{
    if (play->castle->life == 6) {
        play->castle->heart[2].rect.left = 0;
        play->castle->heart[1].rect.left = 0;
        play->castle->heart[0].rect.left = 0;
    }
    if (play->castle->life == 5) {
        play->castle->heart[2].rect.left = 51;
        play->castle->heart[1].rect.left = 0;
        play->castle->heart[0].rect.left = 0;
    }
    if (play->castle->life == 4){
        play->castle->heart[2].rect.left = 102;
        play->castle->heart[1].rect.left = 0;
        play->castle->heart[0].rect.left = 0;
    }
}

void option_heart_two(play_t *play)
{
    if (play->castle->life == 3) {
        play->castle->heart[2].rect.left = 102;
        play->castle->heart[1].rect.left = 51;
        play->castle->heart[0].rect.left = 0;
    }
    if (play->castle->life == 2) {
        play->castle->heart[2].rect.left = 102;
        play->castle->heart[1].rect.left = 102;
        play->castle->heart[0].rect.left = 0;
    }
}

void option_heart_three(play_t *play)
{
    if (play->castle->life == 1) {
        play->castle->heart[2].rect.left = 102;
        play->castle->heart[1].rect.left = 102;
        play->castle->heart[0].rect.left = 51;
    }
    if (play->castle->life == 0) {
        play->castle->heart[2].rect.left = 102;
        play->castle->heart[1].rect.left = 102;
        play->castle->heart[0].rect.left = 102;
    }
}
