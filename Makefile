NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror

SOURCE = commands/rev_rotate.c commands/rotate.c \
        commands/sort_stacks.c commands/ft_sort_three.c commands/swap.c \
        sources/ft_handle_errors.c sources/ft_init_a_to_b.c sources/ft_init_b_to_a.c \
        sources/push_swap.c commands/push.c sources/ft_init_stack.c \
        sources/ft_stack_utils.c

OBJ = $(SOURCE:.c=.o)

LIBFT_DIR = libft
LIBFT_LIB = $(LIBFT_DIR)/libft.a
FT_PRINTF_DIR = ft_printf
FT_PRINTF_LIB = $(FT_PRINTF_DIR)/libftprintf.a

all: $(LIBFT_LIB) $(FT_PRINTF_LIB) $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME) $(LIBFT_LIB) $(FT_PRINTF_LIB)

$(LIBFT_LIB):
	$(MAKE) -C $(LIBFT_DIR)

$(FT_PRINTF_LIB):
	$(MAKE) -C $(FT_PRINTF_DIR)

%.o: %.c push_swap.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)
	$(MAKE) -C $(LIBFT_DIR) clean
	$(MAKE) -C $(FT_PRINTF_DIR) clean

fclean: clean
	rm -rf $(NAME)
	$(MAKE) -C $(LIBFT_DIR) fclean
	$(MAKE) -C $(FT_PRINTF_DIR) fclean

re: fclean all

.PHONY: all clean fclean re

