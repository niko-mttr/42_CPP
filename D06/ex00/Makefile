NAME	= Bureaucrat

#COMPILATION
CC			=	c++
CFLAGS		=	-Wall -Werror -Wextra -std=c++98 -I includes -MMD

#SRC
SRC			=	main.cpp Bureaucrat.cpp
SRC_PATH	=	src/
SRCS		=	$(addprefix $(SRC_PATH), $(SRC))

#OBJETS
OBJ			=	$(SRC:%.cpp=%.o)
OBJ_PATH	=	obj/
OBJS		=	$(addprefix $(OBJ_PATH), $(OBJ))

#DEPENDANCES
DEPS		=	$(SRC:%.cpp=%.d)

#COMMANDES
all: $(NAME)

$(OBJ_PATH)%.o: $(SRC_PATH)%.cpp
	mkdir -p $(OBJ_PATH)
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@


-include $(DEPS)

clean:
	@rm -rf $(OBJ_PATH)
	@echo "Object and dependance DELETED"

fclean: clean
	@rm -rf $(NAME)
	@echo "$(NAME) DELETED"

re: fclean all

.PHONY: all re clean fclean