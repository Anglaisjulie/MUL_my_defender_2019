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

#define NB_BUTTON (4)
#define NB_ENEMY (50)
#define NB_TOWER (6)
#define NB_LOCATION (5)
#define NB_HEART (3)

static const int ERROR = 84;

static const int KO = 0;
static const int OK = 1;
static const int DRAW = 2;

static const int BASIC = 11;
static const int SLOW = 12;
static const int PROFIT = 13;
static const int WALL = 14;

static const int MAX_SCREEN_X = 1920;
static const int MAX_SCREEN_Y = 1080;

static const int MENU = -1;
static const int PLAY = 0;
static const int INFO = 1;
static const int EXIT = 2;
static const int SETTINGS = 3;

static const int ON_BUTTON = 398;
static const int OUTSIDE_BUTTON = 0;


typedef struct times_s {
    int score;
    sfTime time;
    sfClock *clock;
} times_t;

typedef struct score_s {
    sfText *score;
    sfText *nb_score;
    sfFont *score_f;
} score_t;

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

typedef struct enemy_s {
    basicobject_t *body;
    basicobject_t *b_life;
    sfClock *clock;
    int life;
} enemy_t;

typedef struct tower_s {
    basicobject_t *body;
    int activated;
    int damage;
    int price;
} tower_t;

typedef struct location_s {
    basicobject_t *tower;
    basicobject_t *circle;
    int full;
    int type;
} location_t;

typedef struct castle_s {
    basicobject_t *body;
    basicobject_t *heart;
    int life;
} castle_t;

typedef struct play_s {
    object_t *obj;
    enemy_t *enemy;
    location_t *location;
    tower_t *tower_basic;
    tower_t *tower_slow;
    tower_t *tower_wall;
    tower_t *tower_profit;
    castle_t *castle;
    int coin;
} play_t;

typedef struct game_s {
    menu_t *menu;
    play_t *play;
    score_t *score;
    times_t *time;
} game_t;

//GAME INIT :
void init_game(sfRenderWindow *, game_t *);
int game_malloc_play(game_t *);
int game_malloc_menu(game_t *);
int game_malloc_tower(game_t *);
int game_malloc_tower_body(game_t *);
int game_loop(sfRenderWindow *, game_t *);
int game_malloc_tower_location(game_t *);
int game_malloc_text(game_t *);
int game_malloc_enemy(game_t *);
int game_malloc(game_t *);
void create_game(sfRenderWindow *, game_t *);
void define_value(game_t *);


//TOWER :
location_t init_location_tower(location_t *, float, float);
void create_location_tower(game_t *);
void display_location_tower(sfRenderWindow *, game_t *);
basicobject_t *init_tower_basic(basicobject_t *, float, float, char *path);
void create_tower_basic(game_t *);
basicobject_t *init_tower_slow(basicobject_t *, float, float, char *path);
void create_tower_slow(game_t *);
basicobject_t *init_tower_profit(basicobject_t *, float, float, char *path);
void create_tower_profit(game_t *);
basicobject_t *init_tower_wall(basicobject_t *, float, float, char *path);
void create_tower_wall(game_t *);
void display_tower(sfRenderWindow *, game_t *);
void create_tower(game_t *);
void check_draw_tower(sfRenderWindow *, game_t *);
void destroy_tower(play_t *);
void check_ko_location(sfRenderWindow *, game_t *);

//CASTLE
void create_castle(castle_t *);
basicobject_t init_heart(castle_t *, float, float, int);
void display_castle(sfRenderWindow *, game_t *);
void create_heart(game_t *);
void option_heart_one(play_t *);
void option_heart_two(play_t *);
void option_heart_three(play_t *);
void display_life(sfRenderWindow *, game_t *);


//EVENT :
void manage_event(sfRenderWindow *, game_t *);
void button_same_mouse(sfRenderWindow *, game_t *, int);
void check_hitbox_tower_basic(sfRenderWindow *, game_t *);
void check_hitbox_tower_profit(sfRenderWindow *, game_t *);
void check_hitbox_tower_slow(sfRenderWindow *, game_t *);
void check_hitbox_tower_wall(sfRenderWindow *, game_t *);
void check_hitbox_tower(sfRenderWindow *, game_t *);
void manage_plan(sfRenderWindow *, game_t *);
void put_location(sfRenderWindow *, game_t *, int);
void put_location_basic(sfRenderWindow *, game_t *, int);
void put_location_profit(sfRenderWindow *, game_t *, int);
void put_location_slow(sfRenderWindow *, game_t *, int);
void put_location_wall(sfRenderWindow *, game_t *, int);
void event_play(sfRenderWindow *, game_t *);

//MENU :
void background_menu(sfRenderWindow *, game_t *);
basicobject_t init_button(basicobject_t *, char *, float, float);
void create_button_menu(game_t *);
void display_button_menu(sfRenderWindow *, game_t *);
void choice_menu(sfRenderWindow *, game_t *, int);
void recovery_position_button(sfRenderWindow *, game_t *, int);
void option_menu_map(sfRenderWindow *, game_t *);
void initialize_rect(basicobject_t *);
void destroy_menu(menu_t *);
void action_menu(sfRenderWindow *, game_t *, int);
void action_play(sfRenderWindow *, game_t *);


//MUSIC :
void music_menu(menu_t *);

//MAP :
void display_background_play(sfRenderWindow *, game_t *);
void create_background_play(game_t *);

//ERROR MANAGEMENT


//ENEMY
basicobject_t *init_enemy(enemy_t *, int);
void create_enemy(enemy_t *);
void enemy_animation(sfRenderWindow *, enemy_t *, int);
void display_enemy(sfRenderWindow *, game_t *);
void enemy_move(enemy_t *, int);
void path_x(enemy_t *, sfVector2f, int);
void path_y(enemy_t *, sfVector2f, int);
void kill_enemy_with_castle(play_t *, int);
basicobject_t *init_life_enemy(enemy_t *, int);
void create_life_enemy(enemy_t *);

//DAMAGE
basicobject_t *init_circle(location_t *, float, float, int);
void create_circle(location_t *);
void display_circle(sfRenderWindow *, game_t *);
void mouse_on_tower(sfRenderWindow *, game_t *, int);
void enemy_in_circle(game_t *, int, int);
void type_of_damage(game_t *, int, int);
void damage_enemy(game_t *);

//DESTROY, FREE
void destroy_basic_element_of_play(play_t *);
void destroy_music(menu_t *);
void destroy_game(game_t *, sfRenderWindow *);
void destroy_enemy(enemy_t *);
void destroy_castle(castle_t *);
void condition_destroy_menu(menu_t *);

//SCORE
void create_score(game_t *game);
void upgrade_score(game_t *game);
void create_clock(game_t *game);
void display_text(sfRenderWindow *, game_t *);

//LIB
char *my_itoa(int);

#endif