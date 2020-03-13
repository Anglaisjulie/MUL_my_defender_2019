/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** event_location.c
*/

#include "../fonctions.h"

void put_location_basic(sfRenderWindow *window, game_t *game, int n)
{
    sfVector2i pos_mouse;
    sfVector2f pos_location;
    sfVector2f rec_location;

    pos_mouse = sfMouse_getPositionRenderWindow(window);
    pos_location = sfSprite_getPosition
                                (game->play->location[n].tower->sprite);
    rec_location.x = pos_location.x + 146;
    rec_location.y = pos_location.y + 146;
    if ((pos_mouse.x >= pos_location.x && pos_mouse.x <= rec_location.x
        && pos_mouse.y >= pos_location.y && pos_mouse.y <= rec_location.y)
        && (game->play->tower_basic[0].activated == OK)
        && (game->play->location[n].full == OK)
        && (game->play->coin >= 50)) {
        game->play->tower_basic[n + 1].activated = DRAW;
        game->play->tower_basic[0].activated = KO;
        game->play->location[n].full = KO;
        game->play->coin -= 50;
    }
}

void put_location_profit(sfRenderWindow *window, game_t *game, int n)
{
    sfVector2i pos_mouse;
    sfVector2f pos_location;
    sfVector2f rec_location;

    pos_mouse = sfMouse_getPositionRenderWindow(window);
    pos_location = sfSprite_getPosition
                                (game->play->location[n].tower->sprite);
    rec_location.x = pos_location.x + 146;
    rec_location.y = pos_location.y + 146;
    if ((pos_mouse.x >= pos_location.x && pos_mouse.x <= rec_location.x
        && pos_mouse.y >= pos_location.y && pos_mouse.y <= rec_location.y)
        && (game->play->tower_profit[0].activated == OK)
        && (game->play->location[n].full == OK)
        && (game->play->coin >= 50)) {
        game->play->tower_profit[n + 1].activated = DRAW;
        game->play->tower_profit[0].activated = KO;
        game->play->location[n].full = KO;
        game->play->coin -= 50;
    }
}

void put_location_slow(sfRenderWindow *window, game_t *game, int n)
{
    sfVector2i pos_mouse;
    sfVector2f pos_location;
    sfVector2f rec_location;

    pos_mouse = sfMouse_getPositionRenderWindow(window);
    pos_location = sfSprite_getPosition
                                (game->play->location[n].tower->sprite);
    rec_location.x = pos_location.x + 146;
    rec_location.y = pos_location.y + 146;
    if ((pos_mouse.x >= pos_location.x && pos_mouse.x <= rec_location.x
        && pos_mouse.y >= pos_location.y && pos_mouse.y <= rec_location.y)
        && (game->play->tower_slow[0].activated == OK)
        && (game->play->location[n].full == OK)
        && (game->play->coin >= 50)) {
        game->play->tower_slow[n + 1].activated = DRAW;
        game->play->tower_slow[0].activated = KO;
        game->play->location[n].full = KO;
        game->play->coin -= 50;
    }
}

void put_location_wall(sfRenderWindow *window, game_t *game, int n)
{
    sfVector2i pos_mouse;
    sfVector2f pos_location;
    sfVector2f rec_location;

    pos_mouse = sfMouse_getPositionRenderWindow(window);
    pos_location = sfSprite_getPosition
                                (game->play->location[n].tower->sprite);
    rec_location.x = pos_location.x + 146;
    rec_location.y = pos_location.y + 146;
    if ((pos_mouse.x >= pos_location.x && pos_mouse.x <= rec_location.x
        && pos_mouse.y >= pos_location.y && pos_mouse.y <= rec_location.y)
        && (game->play->tower_wall[0].activated == OK)
        && (game->play->location[n].full == OK)
        && (game->play->coin >= 50)) {
        game->play->tower_wall[n + 1].activated = DRAW;
        game->play->tower_wall[0].activated = KO;
        game->play->location[n].full = KO;
        game->play->coin -= 50;
    }
}

void put_location(sfRenderWindow *window, game_t *game, int n)
{
    put_location_slow(window, game, n);
    put_location_profit(window, game, n);
    put_location_wall(window, game, n);
    put_location_basic(window, game, n);
}