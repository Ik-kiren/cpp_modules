NAME = brain
SRCS = main.cpp

all: $(NAME)

$(NAME) :
		g++ -Werror -Wall -Wextra -std=c++98 $(SRCS) -o $(NAME)

fclean :
		rm $(NAME)

re : fclean all

.PHONY : all fclean re