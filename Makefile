##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC_DIR =		src/

FILE_LIST =		main.c \
				manage_event.c \
				malloc_game.c \
				game.c \
				menu.c \
				destroy.c \
				menu_event.c \
				music_game.c \


SRC		= 		$(addprefix $(SRC_DIR), $(FILE_LIST))

OBJ		=		$(SRC:.c=.o)

NAME 	= 		my_defender

CFLAGS  = -Wextra -Wall -I./include/ -fdiagnostics-color -lcsfml-window -lcsfml-graphics -lcsfml-audio -lcsfml-system -g3

all: 	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
	rm -f src/*.o

fclean: clean
	rm -f $(NAME)

re:		fclean all