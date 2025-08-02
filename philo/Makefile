# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: srioboo- <srioboo-@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/05 22:29:52 by srioboo-          #+#    #+#              #
#    Updated: 2025/08/02 12:06:38 by srioboo-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Colors
COLOUR_GREEN=\033[0;32m
COLOUR_RED=\033[0;31m
COLOUR_BLUE=\033[0;34m
COLOUR_YELLOW= \033[33m
COLOUR_MAGENTA=\033[35m
COLOUR_TURQUOISE=\033[36m	
COLOUR_END=\033[0m

# name
NAME = philo

# Compile and other commands
CC = @cc
MAKE = @make -C
# CFLAGS = -Wall -Wextra -Werror
CFLAGS = -Wall -Wextra -Werror -g -pthread
AR = @ar rcs
RM = @rm
SFLAG = -s

# Source files and objects
BUILD_DIR = build
SRC_DIR = src
SRCS = $(SRC_DIR)/philo.c \
		$(SRC_DIR)/utils.c \
		$(SRC_DIR)/validate.c \
		$(SRC_DIR)/initialization.c \
		$(SRC_DIR)/routine.c
OBJS = $(SRCS:$(SRC_DIR)/%.c=$(BUILD_DIR)/%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "$(COLOUR_GREEN)\n$(NAME) compiled!\n$(COLOUR_END)"

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@
	@echo "$(COLOUR_BLUE)Compiling: $(COLOUR_END)$<"

clean:
	$(RM) -fr $(BUILD_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

test: all
	./$(NAME) 4 300 800 400

debug: all
	gdb ./$(NAME) 4 300 800 400

norm:
	norminette *.c *.h

# detect memory leaks
sane: all
	$(CC) $(CFLAGS) $(OBJS) $(INCLUDES) -o $(NAME) -fsanitize=address,undefined -g
	./$(NAME)

val: all
	valgrind --leak-check=full ./$(NAME)

vall: all
	valgrind --leak-check=full --verbose --track-origins=yes --log-file=leaks.txt ./$(NAME)

.PHONY: all clean fclean re sane val vall debug test
