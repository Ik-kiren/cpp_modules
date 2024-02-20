CXX = c++
NAME = fragptrap
CPPFLAGS = -Werror -Wall -Wextra -std=c++98
SRCS = ClapTrap.cpp ScavTrap.cpp FragTrap.cpp main.cpp
OBJS = $(SRCS:cpp=o)

all: $(NAME)

$(NAME) : $(OBJS)
		$(CXX) $(CPPFLAGS) $(OBJS) -o $(NAME)

fclean:
	rm -rf $(OBJS) $(NAME)

re: fclean all

.PHONY : all fclean re