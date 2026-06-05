NAME = megaphone

FILES = megaphone \

SRC_DIR = src/

CCMAC = clang++
CC = c++
FLAGS = -Wall -Werror -Wextra

OBJ = $(SRC:.cpp=.o)

INCLUDE = include/

SRC = $(addsuffix .cpp, $(FILES))

GREEN = \033[0;92m
YELLOW = \033[33m
BLUE = \033[34m
RESET = \033[0;39m

all: $(NAME)

$(NAME): $(OBJ)
	@$(CCMAC) $(FLAGS) $(OBJ) -g3 -o $(NAME)
	@echo -e "$(GREEN)megaphone compiled !!$(RESET)"

$(OBJ)%.o: %.cpp $(INCLUDE) Makefile
	@$(CCMAC) $(FLAGS) -c -g3 $< -o $@

clean:
	@rm -rf $(OBJ)
	@rm -rf $(OBJ_DIR)
	@echo -e "$(YELLOW)Obj destroyed !!$(RESET)"

fclean: clean
	@rm -f $(NAME)
	@echo -e "$(YELLOW)Executable destroyed !!$(RESET)"

re: fclean all

.PHONY: all clean fclean re