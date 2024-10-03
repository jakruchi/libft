# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jakruchi <jakruchi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/23 17:57:58 by jakruchi          #+#    #+#              #
#    Updated: 2024/10/03 14:03:29 by jakruchi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
		ft_isprint.c ft_strlen.c ft_toupper.c ft_tolower.c \
		ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c\

OBJ = $(SRC:%c=%o)

$(NAME): $(OBJ)	
		ar -rcs $(NAME) $(OBJ)

%.o: %.c
		$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
