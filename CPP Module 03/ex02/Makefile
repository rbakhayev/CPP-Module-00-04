NAME = fragtrap

INC =	ClapTrap.hpp \
		ScavTrap.hpp \
		FragTrap.hpp

CC = c++

FLAGS = -g -Wall -Wextra -Werror -std=c++98
SRC =	main.cpp \
		ClapTrap.cpp \
		ScavTrap.cpp \
		FragTrap.cpp

OBJS = $(SRC:.cpp=.o)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

all: $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
