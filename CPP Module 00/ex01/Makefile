NAME = phonebook

INC =	Contact.hpp \
		Phonebook.hpp 

CC = c++

FLAGS = -Wall -Wextra -Werror -g -std=c++98
SRC =	Contact.cpp \
		Phonebook.cpp \
		main.cpp
	

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
