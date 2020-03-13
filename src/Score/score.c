/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** score
*/

#include "../fonctions.h"

char *my_itoa(int nb)
{
    int length = 0;
    char *str = NULL;

    while (nb > 0) {
        nb = nb / 10;
        length++;
    }
    str = malloc(sizeof(char *) * length + 1);
    str[length] = '\0';
    while (length--) {
        str[length] = nb % 10 + '0';
        nb = nb / 10;
    }
    return (str);
}

void draw_score(game_t *game)
{
    sfVector2f vector = {1600, 900};
    game->score->score = sfText_create();
    game->score->nb_score = sfText_create();
    game->score->score_f = sfFont_createFromFile("score.ttf");
    sfText_setFont(game->score->score, game->score->score_f);
    sfText_setPosition(game->score->score, vector);
    sfText_setString(game->score->score, "score: ");
}

void upgrade_score(game_t *game)
{
    sfVector2f vector = {1700, 900};
    float seconds;
    char *score = my_itoa(23);
    game->time->clock = sfClock_create();
    game->time->time = sfClock_getElapsedTime(game->time->clock);
    seconds = game->time->time.microseconds / 1000000.0;
    sfText_setPosition(game->score->nb_score, vector);
    sfText_setString(game->score->nb_score, score);

    if (seconds > 1.0) {
        game->time->score = game->time->score + 5;
        sfClock_restart(game->time->clock);
    }
}