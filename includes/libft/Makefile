# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brunmigu <brunmigu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/08 14:41:38 by brunmigu          #+#    #+#              #
#    Updated: 2025/06/10 06:17:02 by brunmigu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_isalpha.c ft_isdigit.c ft_isascii.c ft_isalnum.c ft_isprint.c ft_tolower.c \
			 ft_toupper.c ft_bzero.c ft_memset.c ft_memcpy.c ft_memmove.c ft_strchr.c ft_strlen.c \
			 ft_strlcpy.c ft_strlcat.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c \
			 ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c \
			 ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
			 ft_putendl_fd.c ft_putnbr_fd.c ft_printf.c ft_print_char.c ft_print_dec.c ft_print_hex.c \
			 ft_print_ptr.c ft_print_str.c ft_print_udec.c get_next_line.c get_next_line_utils.c \
			 get_next_line_bonus.c get_next_line_utils_bonus.c ft_lstnew.c ft_lstadd_front.c \
			 ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
			 ft_lstmap.c

OBJS = $(SRCS:.c=.o)

RM = rm -f
CFLAGS = -Wall -Wextra -Werror
CC = cc
INCLUDE = -I.

all: $(NAME)

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@echo "✅ [libft] Library Created"

%.o: %.c
	@$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

clean:
	@$(RM) $(OBJS) $(BONUS_OBJS)
	@echo "🧹 [libft] Objects removed!"

fclean: clean
	@$(RM) $(NAME)
	@echo "🔥 [libft] Library removed!"

re: fclean all

.PHONY: all clean fclean re bonus
