NAME	= sed

#COMPILATION
CC		= c++
CFLAGS	= -Wall -Werror -Wextra -std=c++98

#INCLUDES
INC		= includes/

#SRC
SRC		=	main.cpp sed.cpp

#OBJETS
OBJ		= $(SRC:%.cpp=%.o)


#COMMANDES
all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@
	touch test

$(OBJ): $(SRC)
	$(CC) $(CFLAGS) -c $^

clean:
	@rm -rf $(OBJ)
	@echo "$(OBJ) DELETED"

fclean: clean
	@rm -rf $(NAME)
	@rm -rf test
	@rm -rf test.replace
	@echo "$(NAME) DELETED"

re: fclean all

.PHONY: all re clean fclean