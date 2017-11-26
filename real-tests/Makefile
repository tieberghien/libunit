# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: etieberg <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/25 22:01:31 by etieberg          #+#    #+#              #
#    Updated: 2017/11/26 23:31:29 by wbaridon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=   real_tests
CC			=	gcc
CFLAGS		=	-g -Wall -Werror -Wextra

LIB_PATH	=	../libft
LIB			=	$(LIB_PATH)/libft.a

FWPATH		=	../libunit.a

INC_DIR		=	../includes
INC			=	-I $(INC_DIR) -I $(LIB_PATH)/includes -I ../includes -v

SRC_DIR		=	.
SRC			=	main.c				\
				atoi/00_launcher.c \
				atoi/01_basic_test.c \
				atoi/02_null_test.c \
				atoi/03_negative_number_test.c \
				atoi/04_negative_int_min_test.c \
				atoi/05_double_negative_test.c \
				atoi/06_double_positive_test.c \
				atoi/07_only_space_test.c \
				atoi/08_space_with_number_test.c \
				atoi/09_only_letter_test.c \
				atoi/10_number_and_letter_test.c \
				atoi/11_one_positive_test.c \
				isalpha/00_launcher.c \
				isalpha/01_basic_test1.c \
				isalpha/02_digit_test1.c \
				isalpha/03_upperletter_test1.c \
				isalpha/04_null_test1.c \
				isalpha/05_space_test1.c \
				isdigit/00_launcher.c \
				isdigit/01_basic_test.c \
				isdigit/02_digit_test.c \
				isdigit/03_upperletter_test.c \
				isdigit/04_null_test.c \
				isdigit/05_space_test.c \
				memchr/00_launcher.c \
				memchr/01_basic_test2.c \
				memchr/02_null_test2.c \
				memchr/03_space_test2.c \
				memcpy/00_launcher.c \
				memcpy/01_basic_test.c \
				memcpy/02_null_test.c \
				memcpy/03_space_test.c \
				memset/00_launcher.c \
				memset/01_basic_test.c \
				memset/02_null_test.c \
				memset/03_lenght_zero_test.c \
				strcat/00_launcher.c \
				strcat/01_basic_test.c \
				strcat/02_space_test.c \
				strcat/03_null_test.c \
				strcmp/00_launcher.c \
				strcmp/01_basic_test.c \
				strcmp/02_unsigned_test.c \
				strcmp/03_null_test.c \
				strcmp/04_s1_greater_test.c \
				strcmp/05_s1_lower_test.c \
				strcmp/06_only_space_test.c \
				strcpy/00_launcher.c \
				strcpy/01_basic_test.c \
				strcpy/02_null_test.c \
				strcpy/03_space_test.c \
				strdup/00_launcher.c \
				strdup/01_basic_test.c \
				strdup/02_null_test.c \
				strdup/03_nomemory_test.c \
				strdup/04_free_test.c \
				strlen/00_launcher.c \
				strlen/01_basic_test.c \
				strlen/02_null_test.c \
				strstr/00_launcher.c \
				strstr/01_basic_test.c \
				strstr/02_null_test.c \
				strstr/03_space_test.c \
				strstr/04_repeat_word_test.c \
				strstr/05_begin_needle_test.c \
				strstr/06_no_found_test.c \
				tolower/00_launcher.c \
				tolower/01_basic_test.c \
				tolower/02_null_test.c \
				tolower/03_minletter_test.c \
				tolower/04_space_test.c \
				tolower/05_number_test.c \
				toupper/00_launcher.c \
				toupper/01_basic_test.c \
				toupper/02_digit_test.c \
				toupper/03_upperletter_test.c \
				toupper/04_null_test.c \
				toupper/05_letter_and_digit_test.c \
				toupper/06_space_test.c

OBJS		=	$(SRC:.c=.o)

SRCS		=	$(addprefix $(SRC_DIR)/, $(SRC))

all: $(NAME)

$(NAME): $(OBJ_DIR) $(LIB) $(OBJS)

test: $(NAME)
	$(CC) $(CFLAGS) $(OBJS) $(LIB) $(FWPATH) -o $(NAME)
	@./$(NAME)

$(LIB):
	make -C $(LIB_PATH)

%.o: $(SRC_DIR)/%.c
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
