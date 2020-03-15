/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** cursor.c
*/

#include "fonctions.h"

basicobject_t *init_cursor(game_t *game)
{
    game->cursor = malloc(sizeof(basicobject_t));
    game->cursor->texture = sfTexture_createFromFile("picture/cursor.png", NULL);
    game->cursor->sprite = sfSprite_create();
    sfSprite_setTexture(game->cursor->sprite, game->cursor->texture, 1);
    return (game->cursor);
}

void change_mouse(sfRenderWindow *window, game_t *game)
{
    sfVector2i pos;
    sfVector2f xy;

    sfRenderWindow_setMouseCursorVisible(window, sfFalse);
    pos = sfMouse_getPositionRenderWindow(window);
    xy.x = pos.x - 25;
    xy.y = pos.y - 25;
    sfSprite_setPosition(game->cursor->sprite, xy);
    sfRenderWindow_drawSprite(window, game->cursor->sprite, NULL);
}