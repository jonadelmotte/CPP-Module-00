# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jdelmott <jdelmott@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/09/02 13:33:54 by jdelmott          #+#    #+#              #
#    Updated: 2026/09/09 14:14:03 by jdelmott         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

FILES = megaphone \

SRC_DIR = src/

CCMAC = clang++
CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98

OBJ = $(SRC:.cpp=.o)

INCLUDE = include/

SRC = $(addsuffix .cpp, $(FILES))

GREEN = \033[0;92m
YELLOW = \033[33m
BLUE = \033[34m
RESET = \033[0;39m

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) $(OBJ) -g3 -o $(NAME)
	@echo -e "$(GREEN)megaphone compiled !!$(RESET)"

$(OBJ)%.o: %.cpp $(INCLUDE) Makefile
	@$(CC) $(FLAGS) -c -g3 $< -o $@

clean:
	@rm -rf $(OBJ)
	@rm -rf $(OBJ_DIR)
	@echo -e "$(YELLOW)Obj destroyed !!$(RESET)"

fclean: clean
	@rm -f $(NAME)
	@echo -e "$(YELLOW)Executable destroyed !!$(RESET)"

re: fclean all

.PHONY: all clean fclean re