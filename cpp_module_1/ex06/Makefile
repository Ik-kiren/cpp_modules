CXX = c++
NAME = harlfilter
SRCS = Harl.cpp main.cpp
CPPFLAGS = -Werror -Wall -Wextra -std=c++98
OBJS = $(SRCS:cpp=o)

all: $(NAME)

$(NAME) : $(OBJS)
		c++ $(CPPFLAGS) $(OBJS) -o $(NAME)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re