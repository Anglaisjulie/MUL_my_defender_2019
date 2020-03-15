/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** victory_lose.c
*/

#include "../fonctions.h"

void victory(game_t *game)
{
    int check_enemy_life = 0;

    for (int i = 0; i != NB_ENEMY; i++)
    {
        if (game->play->enemy[i].life == SUPP)
            check_enemy_life++;
    }
    if (check_enemy_life == NB_ENEMY)
        game->menu->location = VICTORY;
}

void lose(game_t *game)
{
    if (game->play->castle->life <= 0)
        game->menu->location = LOSE;
}

basicobject_t init_victory_lose(basicobject_t *state, char *path, int n)
{
    state[n].texture = sfTexture_createFromFile
                                        (path, NULL);
    state[n].sprite = sfSprite_create();
    sfSprite_setTexture(state[n].sprite, state[n].texture, 1);
    state[n].vector.x = 0;
    state[n].vector.y = 0;
    sfSprite_setPosition(state[n].sprite, state[n].vector);
    return (state[n]);
}

void create_victory_lose(game_t *game)
{
    game->play->state[0] = init_victory_lose(game->play->state,
                                                    "picture/Defeat.png", 0);
    game->play->state[1] = init_victory_lose(game->play->state,
                                                    "picture/victory.png", 1);
}

void display_state(sfRenderWindow *window, game_t *game)
{
    if (game->menu->location == VICTORY)
        sfRenderWindow_drawSprite(window, game->play->state[1].sprite, NULL);
    if (game->menu->location == LOSE)
        sfRenderWindow_drawSprite(window, game->play->state[0].sprite, NULL);
}