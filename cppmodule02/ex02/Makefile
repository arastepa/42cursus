NAME = fixed

SRCS = 	Fixed.cpp \
		main.cpp \

OBJS = ${SRCS:.cpp=.o}

.cpp.o:
		c++ -Wall -Wextra -Werror -std=c++98 -c $< -o $(<:.cpp=.o)

all: ${NAME}

${NAME}: 	$(OBJS)
			c++ -Wall -Wextra -Werror -std=c++98 -o ${NAME} ${OBJS}

clean:
			rm -f $(OBJS)

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY: all clean fclean re