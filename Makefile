NAME = tic-tac-toe

SRCS = main.c \
       rules.c \
       game.c

all: $(NAME)

$(NAME): $(SRCS)
	gcc $(SRCS) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all
