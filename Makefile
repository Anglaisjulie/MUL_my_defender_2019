##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

RM	=	rm -rf

CC	=	gcc

SRC_DIR =		src/

FILE_LIST =		main.c \
				manage_event.c \
				malloc_game.c \
				game.c \
				menu.c \
				destroy.c \
				menu_event.c \
				music_game.c \
				map_game.c \
				ennemi.c \
				tower.c \
				event_in_game.c \


SRC		= 		$(addprefix $(SRC_DIR), $(FILE_LIST))

OBJ		=		$(SRC:.c=.o)

NAME 	= 		my_defender

CFLAGS  =		-W -Wextra -Wall -I./include/
CFLAGS	+=		-fdiagnostics-color
CFLAGS	+=		-lcsfml-window -lcsfml-graphics -lcsfml-audio -lcsfml-system

all: 	$(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

clean:
	$(RM) src/*.o

fclean: clean
	$(RM) $(NAME)

re:		fclean all