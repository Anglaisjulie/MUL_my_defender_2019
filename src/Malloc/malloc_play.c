/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** malloc_play.c
*/

#include "../fonctions.h"

int game_malloc_play(game_t *game)
{
    game->play = malloc(sizeof(play_t));
    if (game->play == NULL)
        return (ERROR);
    game->play->obj = malloc(sizeof(object_t));
    if (game->play->obj == NULL)
        return (ERROR);
    game->play->obj->background = malloc(sizeof(basicobject_t));
    if (game->play->obj->background == NULL)
        return (ERROR);
    game->play->location = malloc(sizeof(location_t) * NB_LOCATION);
    if (game->play->location == NULL)
        return (ERROR);
    return (0);
}

int game_malloc_enemy(game_t *game)
{
    game->play->enemy = malloc(sizeof(enemy_t) * NB_ENEMY);
    if (game->play->enemy == NULL)
        return (ERROR);
    for (int i = 0; i != NB_ENEMY; i++) {
        game->play->enemy[i].body = malloc(sizeof(basicobject_t));
        if (game->play->enemy[i].body == NULL)
            return (ERROR);
        game->play->enemy[i].clock = malloc(sizeof(sfClock *));
        if (game->play->enemy[i].clock == NULL)
            return (ERROR);
    }
    return (0);
}

int game_malloc_tower(game_t *game)
{
    game->play->tower_basic = malloc(sizeof(tower_t) * NB_TOWER);
    if (game->play->tower_basic == NULL)
        return (ERROR);
    game->play->tower_slow = malloc(sizeof(tower_t) * NB_TOWER);
    if (game->play->tower_slow == NULL)
        return (ERROR);
    game->play->tower_wall = malloc(sizeof(tower_t) * NB_TOWER);
    if (game->play->tower_wall == NULL)
        return (ERROR);
    game->play->tower_profit = malloc(sizeof(tower_t) * NB_TOWER);
    if (game->play->tower_profit == NULL)
        return (ERROR);
    return (0);
}

int game_malloc_tower_body(game_t *game)
{
    for (int i = 0; i != NB_TOWER; i++) {
        game->play->tower_basic[i].body = malloc(sizeof(basicobject_t));
        if (game->play->tower_basic[i].body == NULL)
            return (ERROR);
        game->play->tower_slow[i].body = malloc(sizeof(basicobject_t));
        if (game->play->tower_slow[i].body == NULL)
            return (ERROR);
        game->play->tower_wall[i].body = malloc(sizeof(basicobject_t));
        if (game->play->tower_wall[i].body == NULL)
            return (ERROR);
        game->play->tower_profit[i].body = malloc(sizeof(basicobject_t));
        if (game->play->tower_profit[i].body == NULL)
            return (ERROR);
    }
    return (0);
}

int game_malloc_tower_location(game_t *game)
{
    for (int i = 0; i != NB_LOCATION; i++) {
        game->play->location[i].tower = malloc(sizeof(basicobject_t));
        if (game->play->location[i].tower == NULL)
            return (ERROR);
        game->play->location[i].circle = malloc(sizeof(basicobject_t));
        if (game->play->location[i].circle == NULL)
            return (ERROR);
        game->play->location[i].full = OK;
    }
    game->play->castle = malloc(sizeof(castle_t));
    if (game->play->castle == NULL)
            return (ERROR);
    game->play->castle->body = malloc(sizeof(basicobject_t));
    if (game->play->castle->body == NULL)
            return (ERROR);
    game->play->castle->heart = malloc(sizeof(basicobject_t) * NB_HEART);
    if (game->play->castle->heart == NULL)
            return (ERROR);
    return (0);
}