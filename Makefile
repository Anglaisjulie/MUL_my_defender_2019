##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

RM	=	rm -rf

CC	=	gcc

SRC_DIR =		src/

FILE_LIST =		main.c 														\
				game.c 														\
				manage_event.c 												\
				map_game.c 													\
				value_game.c 												\
				create_game.c												\
				create_clock.c												\
				Lib/my_itoa.c												\
				Malloc/malloc_game.c										\
				Malloc/malloc_menu.c										\
				Malloc/malloc_play.c										\
				Malloc/malloc_text.c										\
				Menu/menu.c 												\
				Menu/menu_event.c 											\
				Menu/music_menu.c 											\
				Menu/option_of_menu.c 										\
				Tower/tower_wall.c											\
				Tower/tower_basic.c											\
				Tower/tower_slow.c											\
				Tower/tower_profit.c										\
				Tower/location_tower.c										\
				Tower/create_tower.c										\
				Tower/draw_tower.c											\
				Tower/hitbox_tower.c										\
				Tower/event_tower.c											\
				Castle/create_castle.c										\
				Castle/life_castle.c										\
				Castle/option_life.c										\
				Enemy/enemy.c 												\
				Enemy/enemy_path.c 											\
				Enemy/life_enemy.c 											\
				Enemy/kill_enemy.c 											\
				Damage/create_circle.c 										\
				Damage/enemy_in_circle.c 									\
				Score/score.c												\
				destroy.c 													\

SRC		= 		$(addprefix $(SRC_DIR), $(FILE_LIST))

OBJ		=		$(SRC:.c=.o)

NAME 	= 		my_defender

CFLAGS  =		-W -Wextra -Wall -I./include/
CFLAGS	+=		-fdiagnostics-color -g3
CFLAGS	+=		-lcsfml-window -lcsfml-graphics -lcsfml-audio -lcsfml-system

all: 	$(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

clean:
	$(RM) src/*.o
	$(RM) src/Menu/*.o
	$(RM) src/Tower/*.o
	$(RM) src/Enemy/*.o
	$(RM) src/Castle/*.o
	$(RM) src/Score/*.o
	$(RM) src/Malloc/*.o
	$(RM) src/Damage/*.o
	$(RM) src/Lib/*.o

fclean: clean
	$(RM) $(NAME)

re:		fclean all