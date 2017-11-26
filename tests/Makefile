# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: etieberg <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/25 22:01:31 by etieberg          #+#    #+#              #
#    Updated: 2017/11/26 17:20:50 by etieberg         ###   ########.fr        #
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

SRC_DIR		=	strlen
SRC			=	00_launcher.c	\
				01_ok_test.c	\
				02_ko_test.c	\
				03_segv_test.c	\
				04_buse_test.c	\
				05_time_test.c

SRC_MAIN	=	main.c

OBJ_DIR		=	strlen/obj
OBJS		=	$(addprefix $(OBJ_DIR)/, $(SRC:.c=.o))
OBJS		+=	$(addprefix $(OBJ_DIR)/, $(SRC_MAIN:.c=.o))

SRCS		=	$(addprefix $(SRC_DIR)/, $(SRC))

all: $(NAME)

$(NAME): $(OBJ_DIR) $(LIB) $(OBJS)

test: $(NAME)
	@$(CC) $(CFLAGS) $(OBJS) $(LIB) $(FWPATH) -o $(NAME)
	@./$(NAME)

$(LIB):
	make -C $(LIB_PATH) re

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) $< $(INC) -c -o $@

$(OBJ_DIR)/%.o: %.c
	$(CC) $(CFLAGS) $< $(INC) -c -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

clean:
	make -C $(LIB_PATH) clean
	/bin/rm -f $(OBJ)
	/bin/rm -Rf $(OBJ_DIR)

fclean: clean
	/bin/rm -f $(LIB)
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
