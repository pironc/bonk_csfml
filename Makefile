##
## EPITECH PROJECT, 2019
## Root Makefile
## File description:
## Root Makefile
##

SRC		=	src/main.c									\
			src/main_menu.c 							\
			src/settings.c 								\
			src/level_1.c 								\
\
			src/init/init_main_menu.c 					\
			src/init/init_settings.c 					\
			src/init/init_level_1.c 					\
\
			src/draw/main_menu_draw.c					\
			src/draw/settings_draw.c					\
			src/draw/level_1_draw.c						\
\
			src/checks/main_menu_event_checks.c 		\
			src/checks/settings_event_checks.c 			\
			src/checks/level_1_event_checks.c 			\
\
			src/checks/main_menu_keycheck.c 			\
			src/checks/settings_keycheck.c 				\
			src/checks/level_1_keycheck.c				\
\
			src/checks/level_1_move.c 					\
\
			src/dispose/dispose.c						\
			src/dispose/dispose_main_menu.c 			\
			src/dispose/dispose_settings.c 				\
			src/dispose/dispose_level_1.c 				\

OBJ		=    $(SRC:%.c=%.o)

NAME	=   bonk

LIB		=	-Llib/my/libmy.a

CFLAGS	=	-g -I./include/ -W -Wall -Wextra -Wshadow

LDFLAGS =	-Llib/my -lmy

CC		=	gcc

.PHONY: all clean fclean re test_run re_tests_run

all:	$(NAME)

$(NAME):		$(LIB) $(OBJ)
		$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)\
		-lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio
$(LIB):
		make -C lib/my

clean:
		$(RM) -f $(OBJ)

fclean:		clean
		$(RM) -f $(NAME) *.gc*
		$(RM) src/*.gc*
		$(RM) *.o
		$(RM) ./lib/my/*.o

re: 	fclean all