# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brunmigu <brunmigu@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/01 19:02:19 by brunmigu          #+#    #+#              #
#    Updated: 2025/07/25 20:19:59 by brunmigu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRCS = src/main.c src/stack_utils.c src/errors_handler.c src/operations/swap.c \
			 src/operations/push.c src/operations/rotate.c src/operations/reverse.c \
			 src/push_swap.c src/radix.c
OBJS = $(SRCS:.c=.o)


CC      = cc
CFLAGS  = -g -Wall -Wextra -Werror
INCLUDE = -I libft
RM      = rm -f

LIBFT_DIR = ./libft
LIBFT_A = $(LIBFT_DIR)/libft.a

all: $(LIBFT_A) $(NAME)

$(NAME): $(OBJS) $(LIBFT_A)
	@$(CC) $(CFLAGS) $(OBJS) $(LIBFT_A) -o $(NAME)

$(LIBFT_A):
	@$(MAKE) -C $(LIBFT_DIR)

%.o: %.c
	@$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@
	@echo "🔧 Compilado: $< → $@"

clean:
	@$(RM) $(OBJS)
	@$(MAKE) -C $(LIBFT_DIR) clean
	@echo "🧹 Objetos removidos!"

fclean: clean
	@$(RM) $(NAME)
	@$(MAKE) -C $(LIBFT_DIR) fclean
	@echo "🔥 Executáveis removidos!"

re: fclean all
	@echo "♻️  Projeto recompilado do zero!"

.PHONY: all clean fclean re
