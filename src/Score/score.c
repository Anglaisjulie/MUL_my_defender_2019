/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** score
*/

#include "../fonctions.h"

void create_score(game_t *game)
{
    sfVector2f vector = {1600, 900};
    sfVector2f vector_nb = {1700, 900};

    game->score->score = sfText_create();
    game->score->nb_score = sfText_create();
    game->score->score_f = sfFont_createFromFile("score.ttf");
    sfText_setFont(game->score->score, game->score->score_f);
    sfText_setFont(game->score->nb_score, game->score->score_f);
    sfText_setPosition(game->score->score, vector);
    sfText_setPosition(game->score->nb_score, vector_nb);
    sfText_setString(game->score->score, "score: ");
}

void upgrade_score(game_t *game)
{
    static char *score = NULL;

    game->time->time = sfClock_getElapsedTime(game->time->clock);
    game->time->seconds = game->time->time.microseconds / 100000;
    score = my_itoa(game->time->score);

    if (game->time->seconds > 10.0) {
        game->time->score = game->time->score + 5;
        sfText_setString(game->score->nb_score, score);
        sfClock_restart(game->time->clock);
    }
}

void display_text(sfRenderWindow *window, game_t *game)
{
    sfRenderWindow_drawText(window, game->score->score, NULL);
    sfRenderWindow_drawText(window, game->score->nb_score, NULL);
}