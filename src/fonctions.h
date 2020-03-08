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

static const int ERROR = 84;

static const int KO = 0;
static const int OK = 1;

static const int MAX_SCREEN_X = 1920;
static const int MAX_SCREEN_Y = 1080;

static const int MENU = -1;
static const int PLAY = 0;
static const int INFO = 1;
static const int EXIT = 2;
static const int SETTINGS = 3;

static const int ON_BUTTON = 398;
static const int OUTSIDE_BUTTON = 0;


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
} object_t;

typedef struct menu_s {
    object_t *obj;
    int location;
    int a;
    int b;
    int *rect_button_a;
    int *rect_button_b;
} menu_t;

typedef struct ennemi_s {
    basicobject_t *body;
    int life;
} ennemi_t;

typedef struct tower_s {
    basicobject_t *body;
    int activated;
} tower_t;

typedef struct play_s {
    object_t *obj;
    ennemi_t *ennemi;
    basicobject_t *location;
    tower_t *tower_basic;
    tower_t *tower_slow;
    tower_t *tower_wall;
    tower_t *tower_profit;
} play_t;

typedef struct game_s {
    menu_t *menu;
    play_t *play;
} game_t;

//GAME INIT :
void init_game(sfRenderWindow *, game_t *);
int game_malloc_play(game_t *);
int game_malloc_menu(game_t *);
int game_malloc_tower(game_t *);
int malloc_tower_body(game_t *);
int game_loop(sfRenderWindow *, game_t *);

//TOWER :
basicobject_t init_location_tower(basicobject_t *, float, float);
void create_location_tower(game_t *);
void display_location_tower(sfRenderWindow *, game_t *);
basicobject_t init_tower(basicobject_t *, float, float, char *path);
void create_tower(game_t *);
void display_tower(sfRenderWindow *, game_t *);


//EVENT :
void manage_event(sfRenderWindow *, game_t *);
void button_same_mouse(sfRenderWindow *, game_t *, int);
void check_hitbox_tower(sfRenderWindow *, game_t *);
void manage_plan(sfRenderWindow *, game_t *);

//MENU :
void background_menu(sfRenderWindow *, game_t *);
basicobject_t init_button(basicobject_t *, char *, float, float);
void create_button_menu(game_t *);
void display_button_menu(sfRenderWindow *, game_t *);
void choice_menu(sfRenderWindow *, game_t *, int);
void recovery_position_button(sfRenderWindow *, game_t *, int);
void option_menu_map(sfRenderWindow *, game_t *);
void initialize_rect(basicobject_t *);

//MUSIC :
void music_menu(game_t *);

//MAP :
void background_play(sfRenderWindow *, game_t *);

//ERROR MANAGEMENT


//ENNEMIE
basicobject_t *init_ennemi(ennemi_t *, int);

//FREE
void free_texture(game_t *);
void free_sprite(game_t *);
void destroy_music(game_t *);

#endif