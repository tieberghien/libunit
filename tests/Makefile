# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: etieberg <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/25 22:01:31 by etieberg          #+#    #+#              #
#    Updated: 2017/11/25 23:08:33 by etieberg         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=   tests
CC			=	gcc
CFLAGS		=	-g -Wall -Werror -Wextra

LIB_PATH	=	../libft
LIB			=	$(LIB_PATH)/libft.a

FWPATH		=	../libunit.a

INC_DIR		=	../includes
INC			=	-I $(INC_DIR) -I $(LIB_PATH)/includes -I ../includes

SRC_DIR		=	.
SRC			=	main.c			\
				00_launcher.c	\
				01_ok_test.c	\
				02_ko_test.c	\
				03_segv_test.c	\
				04_buse_test.c	\
				05_time_test.c

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
