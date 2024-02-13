NAME = sed
FLAGS = -Werror -Wall -Wextra -std=c++98FLAGS = -Werror -Wall -Wextra -std=c++98
SRCS = sed.hpp sed.cpp main.cpp
OBJS = $(SRCS:cpp=o)

all: $(NAME)

$(NAME) : $(OBJS)
		g++ $(FLAGS) $(OBJS) -o $(NAME)

clean :
	rm -f $(OBJS)

fclean : clean
	rm $(NAME)

re : fclean all

.PHONY : all clean fclean re