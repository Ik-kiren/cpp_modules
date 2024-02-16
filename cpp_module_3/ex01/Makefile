CXX = c++
NAME = scavtrap
CPPFLAGS = -Werror -Wall -Wextra -std=c++98
SRCS = clapTrap.cpp Scavtrap.cpp main.cpp
OBJS = $(SRCS:cpp=o)

all: $(NAME)

$(NAME) : $(OBJS)
		g++ $(CPPFLAGS) $(OBJS) -o $(NAME)

fclean:
	rm -rf $(OBJS) $(NAME)

re: fclean all

.PHONY : all fclean re