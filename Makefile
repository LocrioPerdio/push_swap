NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = \
	main.c \
	check_errors.c \
	create_stack.c \
	utils.c \
	operations.c \
	DELETE.c \

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(MAKE) -C ./libft
	@$(CC) $(CFLAGS) $(OBJ) ./libft/libft.a -o $(NAME)

%.o: %.c 
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@${MAKE} -C ./libft clean
	@rm -f $(OBJ)

fclean: clean
	@${MAKE} -C ./libft fclean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
