# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wbaridon <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/26 08:32:23 by wbaridon          #+#    #+#              #
#    Updated: 2017/11/26 08:36:04 by wbaridon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = tests
CC = gcc
CFLAGS = -g -Wall -Werror -Wextra

LIB_PATH =	../libft
LIB	= $(LIB_PATH)/libft.a

FWPATH	= ../libunit.a

INC_DIR	=	../includes
INC = -I $(INC_DIR) -I $(LIB_PATH)/includes -I ../includes

SRC_DIR	=	.
SRC =  // VOIR COMMENT INDIQUER CAR ILS N ONT PAS TOUS LE MEME NOM

OBJ_DIR		=	obj

SRCS		=	$(addprefix $(SRC_DIR)/, $(SRC))
OBJS		=	$(addprefix $(OBJ_DIR)/, $(SRC:.c=.o))

all: $(NAME)

$(NAME): obj $(LIB) $(OBJS)

test: $(NAME)
		@$(CC) $(CFLAGS) $(OBJS) $(LIB) $(FWPATH) -o $(NAME)
			@./$(NAME)

$(LIB):
		make -C $(LIB_PATH) re

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
		$(CC) $(CFLAGS) $< $(INC) -c -o $@ 
obj:
		mkdir -p obj

clean:
		make -C $(LIB_PATH) clean
			/bin/rm -f $(OBJ)
				/bin/rm -Rf obj

fclean: clean
		/bin/rm -f $(LIB)
			/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
