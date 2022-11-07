NAME	= megaphone

#COMPILATION
CC		= g++
CFLAGS	= -Wall -Werror -Wextra -std=c++98

#INCLUDES
INC		= includes/

#SRC
SRC		= megaphone.cpp

#OBJETS
OBJ		= $(SRC:%.cpp=%.o)


#COMMANDES
all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $< -o $@

$(OBJ): $(SRC)
	$(CC) $(CFLAGS) -c $^

clean:
	@rm -rf $(OBJ)
	@echo "$(OBJ) DELETED"

fclean: clean
	@rm -rf $(NAME)
	@echo "$(NAME) DELETED"


.PHONY: all clean fclean