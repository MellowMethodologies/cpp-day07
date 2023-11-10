SRCS = main.cpp

NAME = iter

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

HEADER = iter.hpp

all: $(NAME)

$(NAME): $(SRCS) $(HEADER)
	$(CC) $(FLAGS) $(SRCS) -o $@

fclean:
	rm -f $(NAME)

re: fclean all