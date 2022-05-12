##
## EPITECH PROJECT, 2020
## BSQ
## File description:
## Makefile
##

SRC =	src/my_hunter.c				\
		src/my_event.c				\
		src/my_utils.c				\
		src/create_set_hub.c		\
		src/window_hub.c			\
		src/create_set_cre.c		\
		src/window_cre.c			\
		src/window_game.c			\
		src/create_set_game.c		\
		src/my_event_bird.c			\
		src/-h.c					\


OBJ =	$(SRC:.c=.o)

NAME =	my_hunter

all:
	gcc -o $(NAME) $(SRC) -l csfml-graphics -l csfml-audio -l csfml-window -l csfml-system -g -g3

clean:
		rm -rf $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all