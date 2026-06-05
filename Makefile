NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = \
	main.c \
	check_errors.c \
	stack.c \
	utils.c \
	swap_op.c \
	rotate_op.c \
	reverse_rotate_op.c \
	push_op.c \
	complex_alg.c \
	medium_alg.c \
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
