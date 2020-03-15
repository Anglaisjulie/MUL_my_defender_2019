/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** money
*/

#include "../fonctions.h"

void create_money(game_t *game)
{
    sfVector2f vector = {1600, 860};
    sfVector2f vector_nb = {1700, 860};

    game->score->coin = sfText_create();
    game->score->nb_coin = sfText_create();
    game->score->score_f = sfFont_createFromFile("score.ttf");
    sfText_setFont(game->score->coin, game->score->score_f);
    sfText_setFont(game->score->nb_coin, game->score->score_f);
    sfText_setPosition(game->score->coin, vector);
    sfText_setPosition(game->score->nb_coin, vector_nb);
    sfText_setString(game->score->coin, "coin: ");
}

void upgrade_coin(game_t *game)
{
    char *coin = NULL;

    coin = my_itoa(game->play->coin);
    sfText_setString(game->score->nb_coin, coin);
}

void display_coin(sfRenderWindow *window, game_t *game)
{
    sfRenderWindow_drawText(window, game->score->coin, NULL);
    sfRenderWindow_drawText(window, game->score->nb_coin, NULL);
}