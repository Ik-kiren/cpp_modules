NAME = phonebook
SRCS = contact.cpp phonebook.cpp main.cpp
OBJS = $(SRCS:cpp=o)

all: $(NAME)

$(NAME) : $(OBJS)
		g++ -Werror -Wall -Wextra -std=c++98 $(OBJS) -o $(NAME)

fclean:
	rm -rf $(OBJS) $(NAME)

re: fclean all