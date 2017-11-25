# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: etieberg <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/08 20:01:36 by etieberg          #+#    #+#              #
#    Updated: 2017/11/25 21:51:49 by etieberg         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libunit.a
CC			=   gcc
CFLAGS		=   -g -Wall -Werror -Wextra

LIB_PATH	=   libft
LIB			=   $(LIB_PATH)/libft.a

INC_DIR		=	includes
INCS		=   -I $(INC_DIR) -I $(LIB_PATH)/includes

SRC_DIR     =   framework
SRC			=	main.c		\
				colours.c

OBJ_DIR		=	framework/obj

SRCS		=	$(addprefix $(SRC_DIR)/, $(SRC))
OBJS		=	$(addprefix $(OBJ_DIR)/, $(SRC:.c=.o))

all: framework/obj $(NAME)

$(NAME): $(LIB) $(OBJS)
	cp $(LIB) $@
	ar rc $@ $^
	ranlib $@

$(LIB):
	make -C $(LIB_PATH) re

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) $(INCS) -c -o $@ $<

framework/obj:
	mkdir -p framework/obj

clean:
	make -C $(LIB_PATH) clean
	/bin/rm -f $(OBJ)
	/bin/rm -Rf framework/obj

fclean: clean
	/bin/rm -f $(LIB)
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
