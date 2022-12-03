NAME	= FragTrap

#COMPILATION
CC		= c++
CFLAGS	= -Wall -Werror -Wextra -std=c++98 -MMD

#INCLUDES
INC		= includes/

#SRC
SRC		=	main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

#OBJETS
OBJ		= $(SRC:%.cpp=%.o)

#DEPENDANCES
DEPS	= $(SRC:%.cpp=%.d)


#COMMANDES
all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@

$(OBJ): $(SRC)
	$(CC) $(CFLAGS) -c $^

-include $(DEPS)

clean:
	@rm -rf $(OBJ)
	@rm -rf $(DEPS)
	@echo "Object and dependance files DELETED"

fclean: clean
	@rm -rf $(NAME)
	@echo "$(NAME) DELETED"

re: fclean all

.PHONY: all re clean fclean