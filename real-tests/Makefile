<<<<<<< HEAD
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
=======
NAME			=	unit_test

### SPECIFY YOUR LIBFT PATH HERE ###
LIBFT_FOLDER	=	../libft
####################################

LIBFT			=	$(LIBFT_FOLDER)/libft.a
LIBFTLIB		=	-L$(LIBFT_FOLDER) -lft

FW_FOLDER		=	..
FRAMEWORKLIB	=	-L$(FW_FOLDER) -lunit
FRAMEWORK		=	$(FW_FOLDER)/libunit.a

CC				=	gcc
CFLAGS			+=	-Wall -Werror -Wextra
RM				=	/bin/rm
RMFLAGS			+=	-rf
#	Liste des sources
SRCS =		main.c \
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
				isalpha/01_basic_test.c \
				isalpha/02_digit_test.c \
				isalpha/03_upperletter_test.c \
				isalpha/04_null_test.c \
				isalpha/05_space_test.c \
				isdigit/00_launcher.c \
				isdigit/01_basic_test.c \
				isdigit/02_digit_test.c \
				isdigit/03_upperletter_test.c \
				isdigit/04_null_test.c \
				isdigit/05_space_test.c \
				memchr/00_launcher.c \
				memchr/01_basic_test.c \
				memchr/02_null_test.c \
				memchr/03_space_test.c \
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
				strncat/00_launcher.c \
				strncat/01_basic_test.c \
				strncat/02_null_test.c \
				strncat/03_space_test.c \
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

OBJS			=	$(notdir $(SRCS:.c=.o))

INCL_FOLDER		=	$(FW_FOLDER)/includes $(LIBFT_FOLDER)/includes

RED				=	\033[0;31m
GREEN			=	\033[0;32m
NC				=	\033[0m
>>>>>>> ae1a3f598e27600d6e376010ba5ef3e9c425f462

all: $(NAME)

$(NAME): $(OBJS) $(FRAMEWORK) $(LIBFT)
	@echo "$(GREEN)Objects created.$(NC)"
	@$(CC) $(CFLAGS) $(addprefix -I,$(INCL_FOLDER)) $(OBJS) $(LIBFTLIB) $(FRAMEWORKLIB) -o $(NAME)
	@echo "$(GREEN)Program created.$(NC)"

$(LIBFT):
	@make -C $(LIBFT_FOLDER) re

<<<<<<< HEAD
$(OBJ_DIR)/%.o: $(SRCS)/%.c
	$(CC) $(CFLAGS) $< $(INC) -c -o $@
=======
$(FRAMEWORK):
	@make -C $(FW_FOLDER) re
>>>>>>> ae1a3f598e27600d6e376010ba5ef3e9c425f462

$(OBJS):
	@$(CC) $(CFLAGS) $(addprefix -I,$(INCL_FOLDER)) -c $(SRCS)

test: $(NAME)
	@./$(NAME)

clean:
	@$(RM) $(RMFLAGS) $(OBJS)
	@echo "$(RED)Objects deleted.$(NC)"

fclean: clean
	@$(RM) $(RMFLAGS) $(NAME)
	@echo "$(RED)Program deleted.$(NC)"

re: fclean all

.PHONY: all clean test fclean re
