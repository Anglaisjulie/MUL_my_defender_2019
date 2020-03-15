/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** malloc_text
*/

#include "../fonctions.h"

int game_malloc_text(game_t *game)
{
    game->score = malloc(sizeof(score_t));
    if (game->score == NULL)
        return (ERROR);
    game->time = malloc(sizeof(times_t));
    if (game->time == NULL)
        return (ERROR);
    return (0);
}

int game_malloc_state(game_t *game)
{
    game->play->state = malloc(sizeof(basicobject_t) * 2);
    if (game->play->state == NULL)
        return (ERROR);
    return (0);
}