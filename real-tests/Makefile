# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: etieberg <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/25 22:01:31 by etieberg          #+#    #+#              #
#    Updated: 2017/11/26 20:00:26 by etieberg         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=   real_tests
CC			=	gcc
CFLAGS		=	-g -Wall -Werror -Wextra

LIB_PATH	=	../libft
LIB			=	$(LIB_PATH)/libft.a

FWPATH		=	../libunit.a

INC_DIR		=	../includes
INC			=	-I $(INC_DIR) -I $(LIB_PATH)/includes -I ../includes

DIR_ATOI	= 	atoi
DIR_ISA		=	isalpha
DIR_ISD		=	isdigit
DIR_MCHR	=	memchr
DIR_MCPY	=	memcpy
DIR_MSET	=	memset
DIR_SCAT	=	strcat
DIR_SCMP	=	strcmp
DIR_SCPY	=	strcpy
DIR_SDUP	=	strdup
DIR_SLEN	=	strlen
DIR_SNCAT	=	strncat
DIR_SSTR	=	strstr
DIR_TUP		=	toupper
DIR_TLO		=	tolower

SRC_MAIN	=	main.c

SRC_ATOI	=	00_launcher.c \
				01_basic_test.c \
				02_null_test.c \
				03_negative_number_test.c \
				04_negative_int_min_test.c \
				05_double_negative_test.c \
				06_double_positive_test.c \
				07_only_space_test.c \
				08_space_with_number_test.c \
				09_only_letter_test.c \
				10_number_and_letter_test.c \
				11_one_positive_test.c

SRC_ALP		=	00_launcher.c \
				01_basic_test.c \
				02_digit_test.c \
				03_upperletter_test.c \
				04_null_test.c \
				05_space_test.c

SRC_DIG		=	00_launcher.c \
				01_basic_test.c \
				02_digit_test.c \
				03_upperletter_test.c \
				04_null_test.c \
				05_space_test.c

SRC_CHR		=	00_launcher.c \
				01_basic_test.c \
				02_null_test.c \
				03_space_test.c

SRC_CPY		=	00_launcher.c \
				01_basic_test.c \
				02_null_test.c \
				03_space_test.c

SRC_SET		=	00_launcher.c \
				01_basic_test.c \
				02_null_test.c \
				03_lenght_zero_test.c

SRC_CAT		=	00_launcher.c \
				01_basic_test.c \
				02_space_test.c \
				03_null_test.c

SRC_CMP		=	00_launcher.c \
				01_basic_test.c \
				02_unsigned_test.c \
				03_null_test.c \
				04_s1_greater_test.c \
				05_s1_lower_test.c \
				06_only_space_test.c

SRC_SCPY	=	00_launcher.c \
				01_basic_test.c \
				02_null_test.c \
				03_space_test.c

SRC_DUP		=	00_launcher.c \
				01_basic_test.c \
				02_null_test.c \
				03_nomemory_test.c \
				04_free_test.c

SRC_LEN		=	00_launcher.c \
				01_basic_test.c \
				02_null_test.c

SRC_NCAT	=	00_launcher.c \
				01_basic_test.c \
				02_null_test.c \
				03_space_test.c

SRC_STR		=	00_launcher.c \
				01_basic_test.c \
				02_null_test.c \
				03_space_test.c \
				04_repeat_word_test.c \
				05_begin_needle_test.c \
				06_no_found_test.c

SRC_TLO		=	00_launcher.c \
				01_basic_test.c \
				02_null_test.c \
				03_minletter_test.c \
				04_space_test.c \
				05_number_test.c

SRC_TUP		=	00_launcher.c \
				01_basic_test.c \
				02_digit_test.c \
				03_upperletter_test.c \
				04_null_test.c \
				05_letter_and_digit_test.c \
				06_space_test.c

OBJ_DIR		=	obj

OBJS		=	$(notdir $(SRCS:.c=.o))
#OBJS        =   $(addprefix $(OBJ_DIR)/, $(SRCS:.c=.o))
#OBJS        +=  $(addprefix $(OBJ_DIR)/, $(SRC_MAIN:.c=.o))

SRCS        =   $(addprefix $(DIR_ATOI)/, $(SRC_ATOI))
SRCS		+=   $(addprefix $(DIR_ISA)/, $(SRC_ALP))
SRCS        +=   $(addprefix $(DIR_ISD)/, $(SRC_DIG))
SRCS        +=   $(addprefix $(DIR_MCHR)/, $(SRC_CHR))
SRCS        +=   $(addprefix $(DIR_MCPY)/, $(SRC_CPY))
SRCS        +=   $(addprefix $(DIR_MSET)/, $(SRC_SET))
SRCS        +=   $(addprefix $(DIR_SCAT)/, $(SRC_CAT))
SRCS        +=   $(addprefix $(DIR_SCMP)/, $(SRC_CMP))
SRCS        +=   $(addprefix $(DIR_SCPY)/, $(SRC_SCPY))
SRCS        +=   $(addprefix $(DIR_SDUP)/, $(SRC_DUP))
SRCS        +=   $(addprefix $(DIR_SLEN)/, $(SRC_LEN))
SRCS        +=   $(addprefix $(DIR_SNCAT)/, $(SRC_NCAT))
SRCS        +=   $(addprefix $(DIR_SSTR)/, $(SRC_STR))
SRCS        +=   $(addprefix $(DIR_TUP)/, $(SRC_TUP))
SRCS        +=   $(addprefix $(DIR_TLO)/, $(SRC_TLO))

all: $(NAME)

$(NAME): $(OBJ_DIR) $(LIB) $(OBJS)

test: $(NAME)
	@$(CC) $(CFLAGS) $(OBJS) $(LIB) $(FWPATH) -o $(NAME)
#	mv $(OBJS) $(OBJ_DIR)
	@./$(NAME)

$(LIB):
	make -C $(LIB_PATH) re

$(OBJ_DIR)/%.o: $(SRCS)/%.c
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
