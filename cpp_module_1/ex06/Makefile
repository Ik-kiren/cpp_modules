NAME = harlfilter
SRCS = Harl.hpp Harl.cpp main.cpp
FLAGS = -Werror -Wall -Wextra -std=c++98FLAGS = -Werror -Wall -Wextra -std=c++98
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