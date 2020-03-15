/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** create_circle.c
*/

#include "../fonctions.h"

basicobject_t *init_circle(location_t *location, float x, float y, int n)
{
    location[n].circle->texture = sfTexture_createFromFile
                                                ("picture/zone.png", NULL);
    location[n].circle->sprite = sfSprite_create();
    sfSprite_setTexture(location[n].circle->sprite,
                                                location[n].circle->texture, 1);
    location[n].circle->vector.x = x;
    location[n].circle->vector.y = y;
    sfSprite_setPosition(location[n].circle->sprite,
                                                    location[n].circle->vector);
    return (location[n].circle);
}

void create_circle(location_t *location)
{
    location[0].circle = init_circle(location, 80.0, 300.0, 0);
    location[1].circle = init_circle(location, 380.0, 110.0, 1);
    location[2].circle = init_circle(location, 470.0, 470.0, 2);
    location[3].circle = init_circle(location, 770.0, 340.0, 3);
    location[4].circle = init_circle(location, 1120.0, 310.0, 4);
}

void display_circle(sfRenderWindow *window, game_t *game)
{
    for (int i = 0; i != 5; i++) {
        if (game->play->location[i].full == KO)
            mouse_on_tower(window, game, i);
    }
}

void mouse_on_tower(sfRenderWindow *window, game_t *game, int n)
{
    sfVector2i pos_mouse;
    sfVector2f pos_tower;
    sfVector2f rec_tower;

    pos_mouse = sfMouse_getPositionRenderWindow(window);
    pos_tower = sfSprite_getPosition
                                (game->play->tower_slow[n + 1].body->sprite);
    rec_tower.x = pos_tower.x + 80;
    rec_tower.y = pos_tower.y + 130;
    if (pos_mouse.x >= pos_tower.x && pos_mouse.x <= rec_tower.x
        && pos_mouse.y >= pos_tower.y && pos_mouse.y <= rec_tower.y) {
            sfRenderWindow_drawSprite
                        (window, game->play->location[n].circle->sprite, NULL);
    }
}