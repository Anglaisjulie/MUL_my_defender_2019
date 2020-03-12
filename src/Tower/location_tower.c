/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** location_tower.c
*/

#include "../fonctions.h"

location_t init_location_tower(location_t *location, float x, float y)
{
    static int n = 0;

    location[n].tower->texture = sfTexture_createFromFile
                                                    ("picture/check.png", NULL);
    location[n].tower->sprite = sfSprite_create();
    sfSprite_setTexture(location[n].tower->sprite,
                                                location[n].tower->texture, 1);
    location[n].tower->vector.x = x;
    location[n].tower->vector.y = y;
    sfSprite_setPosition(location[n].tower->sprite, location[n].tower->vector);
    n++;
    return (location[n - 1]);
}

void create_location_tower(game_t *game)
{
    game->play->location[0] = init_location_tower
                                (game->play->location, 35.0, 355.0);
    game->play->location[1] = init_location_tower
                                (game->play->location, 345.0, 315.0);
    game->play->location[2] = init_location_tower
                                (game->play->location, 705.0, 455.0);
    game->play->location[3] = init_location_tower
                                (game->play->location, 1055.0, 540.0);
    game->play->location[4] = init_location_tower
                                (game->play->location, 1250.0, 250.0);
}

void display_location_tower(sfRenderWindow *window, game_t *game)
{
    if ((game->play->tower_basic->activated == OK)
        || (game->play->tower_profit->activated == OK)
        || (game->play->tower_slow->activated == OK)
        || (game->play->tower_wall->activated == OK))
        check_ko_location(window, game);
}

void check_ko_location(sfRenderWindow *window, game_t *game)
{
    for (int i = 0; i != 5; i++) {
        if (game->play->location[i].full == OK) {
            sfRenderWindow_drawSprite(window,
                                game->play->location[i].tower->sprite, NULL);
        }
    }
}