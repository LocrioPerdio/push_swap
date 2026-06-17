NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = \
	main.c \
	alg_simple.c \
	alg_medium.c \
	alg_complex.c \
	alg_adaptive.c \
	check_errors.c \
	stack.c \
	stack_utils.c \
	utils.c \
	op_swap.c \
	op_rotate.c \
	op_reverse_rotate.c \
	op_push.c \
	bench.c \
	set_functions.c \
	
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
