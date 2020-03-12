/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** hitbox_tower.c
*/

#include "../fonctions.h"

void check_hitbox_tower_basic(sfRenderWindow *window, game_t *game)
{
    sfVector2i pos_mouse;
    sfVector2f pos_tower;
    sfVector2f rec_tower;

    pos_mouse = sfMouse_getPositionRenderWindow(window);
    pos_tower = sfSprite_getPosition(game->play->tower_basic[0].body->sprite);
    rec_tower.x = pos_tower.x + 121;
    rec_tower.y = pos_tower.y + 222;
    if ((pos_mouse.x >= pos_tower.x && pos_mouse.x <= rec_tower.x
        && pos_mouse.y >= pos_tower.y && pos_mouse.y <= rec_tower.y)
        && (game->play->tower_basic[0].activated == OK))
        game->play->tower_basic[0].activated = KO;
    else if (pos_mouse.x >= pos_tower.x && pos_mouse.x <= rec_tower.x
        && pos_mouse.y >= pos_tower.y && pos_mouse.y <= rec_tower.y)
        game->play->tower_basic[0].activated = OK;
}

void check_hitbox_tower_profit(sfRenderWindow *window, game_t *game)
{
    sfVector2i pos_mouse;
    sfVector2f pos_tower;
    sfVector2f rec_tower;

    pos_mouse = sfMouse_getPositionRenderWindow(window);
    pos_tower = sfSprite_getPosition(game->play->tower_profit[0].body->sprite);
    rec_tower.x = pos_tower.x + 121;
    rec_tower.y = pos_tower.y + 222;
    if ((pos_mouse.x >= pos_tower.x && pos_mouse.x <= rec_tower.x
        && pos_mouse.y >= pos_tower.y && pos_mouse.y <= rec_tower.y)
        && (game->play->tower_profit[0].activated == OK))
        game->play->tower_profit[0].activated = KO;
    else if (pos_mouse.x >= pos_tower.x && pos_mouse.x <= rec_tower.x
        && pos_mouse.y >= pos_tower.y && pos_mouse.y <= rec_tower.y)
        game->play->tower_profit[0].activated = OK;
}

void check_hitbox_tower_slow(sfRenderWindow *window, game_t *game)
{
    sfVector2i pos_mouse;
    sfVector2f pos_tower;
    sfVector2f rec_tower;

    pos_mouse = sfMouse_getPositionRenderWindow(window);
    pos_tower = sfSprite_getPosition(game->play->tower_slow[0].body->sprite);
    rec_tower.x = pos_tower.x + 121;
    rec_tower.y = pos_tower.y + 222;
    if ((pos_mouse.x >= pos_tower.x && pos_mouse.x <= rec_tower.x
        && pos_mouse.y >= pos_tower.y && pos_mouse.y <= rec_tower.y)
        && (game->play->tower_slow[0].activated == OK))
        game->play->tower_slow[0].activated = KO;
    else if (pos_mouse.x >= pos_tower.x && pos_mouse.x <= rec_tower.x
        && pos_mouse.y >= pos_tower.y && pos_mouse.y <= rec_tower.y)
        game->play->tower_slow[0].activated = OK;
}

void check_hitbox_tower_wall(sfRenderWindow *window, game_t *game)
{
    sfVector2i pos_mouse;
    sfVector2f pos_tower;
    sfVector2f rec_tower;

    pos_mouse = sfMouse_getPositionRenderWindow(window);
    pos_tower = sfSprite_getPosition(game->play->tower_wall[0].body->sprite);
    rec_tower.x = pos_tower.x + 121;
    rec_tower.y = pos_tower.y + 222;
    if ((pos_mouse.x >= pos_tower.x && pos_mouse.x <= rec_tower.x
        && pos_mouse.y >= pos_tower.y && pos_mouse.y <= rec_tower.y)
        && (game->play->tower_wall[0].activated == OK))
        game->play->tower_wall[0].activated = KO;
    else if (pos_mouse.x >= pos_tower.x && pos_mouse.x <= rec_tower.x
        && pos_mouse.y >= pos_tower.y && pos_mouse.y <= rec_tower.y)
        game->play->tower_wall[0].activated = OK;
}

void check_hitbox_tower(sfRenderWindow *window, game_t *game)
{
    check_hitbox_tower_basic(window, game);
    check_hitbox_tower_profit(window, game);
    check_hitbox_tower_slow(window, game);
    check_hitbox_tower_wall(window, game);
}