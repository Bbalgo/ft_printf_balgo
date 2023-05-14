# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dsudadec <dsudadec@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/12 11:51:04 by dsudadec          #+#    #+#              #
#    Updated: 2023/05/15 01:47:32 by dsudadec         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c \
	ft_printf_func1.c \
	ft_printf_func2.c

OBJ = $(SRC:.c=.o)
CC = gcc
CFLAGS = -Wall -Werror -Wextra
HEADER = ft_printf.h

all: $(NAME)

%o: %c
	$(CC) $(FLAGS) -c $< -o $@


$(NAME): $(OBJ) $(HEADER)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re all
