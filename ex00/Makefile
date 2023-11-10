SRCS = Whatever.cpp

NAME = convert

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

HEADER = Whatever.hpp

all: $(NAME)

$(NAME): $(SRCS) $(HEADER)
	$(CC) $(FLAGS) $(SRCS) -o $@

fclean:
	rm -f $(NAME)

re: fclean all