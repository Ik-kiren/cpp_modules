NAME = harlfilter
SRCS = Harl.hpp Harl.cpp main.cpp
CPPFLAGS = -Werror -Wall -Wextra -std=c++98CPPFLAGS = -Werror -Wall -Wextra -std=c++98
OBJS = $(SRCS:cpp=o)

all: $(NAME)

$(NAME) : $(OBJS)
		g++ $(CPPFLAGS) $(OBJS) -o $(NAME)

clean :
	rm -f $(OBJS)

fclean : clean
	rm $(NAME)

re : fclean all

.PHONY : all clean fclean re