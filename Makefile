# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: etieberg <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/24 22:27:54 by etieberg          #+#    #+#              #
#    Updated: 2017/11/24 22:35:25 by etieberg         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= 	libunit.a
CC			=	gcc
CFLAGS		=	-g -Wall -Werror -Wextra

SRC_DIR		=	framework
SRC			=	main.c

OBJ_DIR		=	obj

SRCS        =   $(addprefix $(SRC_DIR)/, $(SRC))
OBJS        =   $(addprefix $(OBJ_DIR)/, $(SRC:.c=.o))

all = obj $(NAME)

$(NAME): $(OBJS)
	ar -rc $(NAME) $(OBJ)
	ranlib $(NAME)

obj:
	mkdir -p obj

clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
