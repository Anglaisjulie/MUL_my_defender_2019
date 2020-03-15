/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** enemy.c
*/

#include "../fonctions.h"

basicobject_t *init_enemy(enemy_t *enemy, int n)
{
    sfIntRect rect = {0, 0, 90, 87};

    enemy[n].body->texture = sfTexture_createFromFile
                                        ("picture/enemy.png", NULL);
    enemy[n].body->sprite = sfSprite_create();
    sfSprite_setTexture(enemy[n].body->sprite, enemy[n].body->texture, 1);
    enemy[n].body->vector.x = 80 * ( - n);
    enemy[n].body->vector.y = 500;
    sfSprite_setPosition(enemy[n].body->sprite, enemy[n].body->vector);
    enemy[n].body->rect = rect;
    sfSprite_setTextureRect(enemy[n].body->sprite, enemy[n].body->rect);
    enemy[n].life = 100;
    return (enemy[n].body);
}

void create_enemy(enemy_t *enemy)
{
    for (int i = 0; i != NB_ENEMY; i++)
        enemy[i].body = init_enemy(enemy, i);
}

void enemy_animation(sfRenderWindow *window, game_t *game, int n)
{
    sfVector2f position = sfSprite_getPosition
                                            (game->play->enemy[n].body->sprite);

    if (sfClock_getElapsedTime
                        (game->play->enemy[n].clock).microseconds / 100000) {
        if (game->play->enemy[n].body->rect.left == 979)
            game->play->enemy[n].body->rect.left = 0;
        else
            game->play->enemy[n].body->rect.left += 89;
        sfSprite_setTextureRect(game->play->enemy[n].body->sprite,
                                            game->play->enemy[n].body->rect);
        sfClock_restart(game->play->enemy[n].clock);
    }
    if (position.x != 1500 && game->play->enemy[n].life != 0) {
        sfRenderWindow_drawSprite
                            (window, game->play->enemy[n].body->sprite, NULL);
        sfRenderWindow_drawSprite
                            (window, game->play->enemy[n].b_life->sprite, NULL);
        game->play->coin += 15;
    }
}

void display_enemy(sfRenderWindow *window, game_t *game)
{
    for (int i = 0; i != NB_ENEMY; i++) {
        enemy_animation(window, game, i);
        enemy_move(game->play->enemy, i);
        kill_enemy_with_castle(game->play, i);
    }
}