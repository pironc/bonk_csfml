SRC 	=		my_put_nbr.c				\
				my_putchar.c				\
				my_putstr.c					\
				analyse_events.c			\
				manage_mouse_click.c		\
				close_window.c				\
				move_rect.c					\
				random_duck.c

OBJ 	=		$(SRC:%.c=%.o)

NAME 	=		libmy.a

all:	$(NAME)

$(NAME):		$(OBJ)
		ar rcs $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)
		rm -f *.o

re:		fclean all