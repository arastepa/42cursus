NAME = ScavTrap

SRCS = ClapTrap.cpp \
       ScavTrap.cpp \
       main.cpp \

OBJS = ${SRCS:.cpp=.o}

all:${NAME}

${NAME}:	${OBJS}
		c++ -Wall -Wextra -Werror -o ${NAME} ${OBJS}

clean:
	rm -f ${OBJS}
fclean:	clean
	rm -f ${NAME}

re: fclean all

.PHONY:
	all clean fclean re
