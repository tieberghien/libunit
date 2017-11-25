# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: etieberg <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/08 20:01:36 by etieberg          #+#    #+#              #
#    Updated: 2017/11/25 18:12:59 by etieberg         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libunit.a

CC		=   gcc
CFLAGS	=   -g -Wall -Werror -Wextra

SRC		=	main.c		\
			colourize.c	\

OBJ		= $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
