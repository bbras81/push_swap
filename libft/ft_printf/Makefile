# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brunmigu <brunmigu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/01 09:47:45 by brunmigu          #+#    #+#              #
#    Updated: 2025/07/10 22:10:44 by brunmigu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
COMPILER = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -g
INCLUDE = -I.
AR = ar rcs
LIBFT = ./libft/libft.a
LIBFTDIR = ./libft/

SRCS = ft_printf.c ft_print_str.c ft_print_ptr.c \
		 ft_print_char.c ft_print_udec.c ft_print_hex.c \
		 ft_print_dec.c libft/ft_putchar_fd.c libft/ft_strlen.c \

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(OBJS): %.o: %.c
	@$(COMPILER) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(NAME): $(OBJS) $(LIBFT)
	@$(AR) $(NAME) $(OBJS) $(LIBFT)
	@echo "libftprintf.a compiled successfully."

$(LIBFT): $(LIBFTDIR)
	@$(MAKE) -C $(LIBFTDIR)

clean:
	@$(RM) $(OBJS)
	@$(MAKE) clean -C $(LIBFTDIR)
	@echo "Object files cleaned successfully."

fclean: clean
	@$(RM) $(NAME)
	@$(MAKE) fclean -C $(LIBFTDIR)
	@echo "All libraries cleaned successfully."

re: fclean all

.PHONY: all clean fclean re deps
