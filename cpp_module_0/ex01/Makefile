NAME = phonebook
FLAGS = -Werror -Wall -Wextra -std=c++98
SRCS = Contact.cpp Phonebook.cpp main.cpp
OBJS = $(SRCS:cpp=o)

all: $(NAME)

$(NAME) : $(OBJS)
		g++ $(FLAGS) $(OBJS) -o $(NAME)

fclean:
	rm -rf $(OBJS) $(NAME)

re: fclean all

.PHONY : all fclean re