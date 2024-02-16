CXX = c++
NAME = fixed
SRCS = main.cpp Fixed.cpp
CPPFLAGS = -Werror -Wall -Wextra -std=c++98
OBJS = $(SRCS:cpp=o)

all: $(NAME)

$(NAME) : $(OBJS)
		$(CXX) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re