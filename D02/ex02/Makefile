#name
NAME	= Fixed

#files
SRCS 	= main.cpp Fixed.cpp operation.cpp

#objects
OBJS 	= ${SRCS:.cpp=.o}

#dependances
DEP		= ${SRCS:.cpp=.d}

CXX 		= c++
CXXFLAGS 	= -Wall -Wextra -Werror -std=c++98

.cpp.o:
		@${CXX} ${CXXFLAGS} -MMD -c -o $@ $<

all: 	${NAME}

${NAME}: Makefile ${OBJS} 
		$(CXX) $(CXXFLAGS) -MMD ${OBJS} -o ${NAME}
		@echo "$(NAME) Compiled!\n"

-include $(DEP)

clean:
		@rm -f ${OBJS}
		@rm -f ${DEP}
		@echo "Dependances and objects deleted\n"


fclean: clean
		@rm -f $(NAME)
		@echo "Delete $(NAME)\n"

re:		fclean all

.PHONY: all clean fclean re