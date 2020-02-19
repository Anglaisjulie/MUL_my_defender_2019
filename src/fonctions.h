/*
** EPITECH PROJECT, 2019
** undefined
** File description:
** fonctions.h
*/

#ifndef FONCTIONS_H
#define FONCTIONS_H

#include <SFML/Graphics.h>
#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Audio.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

static const int SPAWN_POS = 1920;

typedef struct basicobject_s {
    sfTexture *texture;
    sfSprite *sprite;
    sfVector2f vector;
    sfIntRect rect;
} basicobject_t;

typedef struct object_s {
    basicobject_t *background;
    basicobject_t *button;
    sfMusic *music;
}object_t;

typedef struct menu_s {
    object_t *obj;
    int location;
    int a;
    int b;
    int *rect_button_a;
    int *rect_button_b;
}menu_t;

typedef struct play_s {
    object_t *obj;
}play_t;

typedef struct game_s {
    menu_t *menu;
    play_t *play;
} game_t;

//GAME INIT :
void init_game(sfRenderWindow *, game_t *);
int game_malloc_play(game_t *);
int game_malloc_menu(game_t *);
int game_loop(sfRenderWindow *, game_t *);

//PLAYER :


//EVENT :
void manage_event(sfRenderWindow *, game_t *);
void button_same_mouse(sfRenderWindow *, game_t *, int);

//MENU :
void background_menu(sfRenderWindow *, game_t *);
basicobject_t init_button(game_t *, char *, float, float);
void create_button_menu(game_t *);
void display_button_menu(sfRenderWindow *, game_t *);
void choice_menu(sfRenderWindow *, game_t *, int);
void recovery_position_button(sfRenderWindow *, game_t *, int);
void option_menu_map(sfRenderWindow *, game_t *);

//MUSIC :
void music_menu(game_t *);

//MAP :
void background_play(sfRenderWindow *, game_t *);

//ERROR MANAGEMENT


//ENNEMIE


//FREE
void free_texture(game_t *);
void free_sprite(game_t *);
void destroy_music(game_t *);

#endif