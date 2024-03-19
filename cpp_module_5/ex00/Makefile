CXX = c++
NAME = bureaucrat
CPPFLAGS = -Werror -Wall -Wextra -std=c++98 #-fsanitize=address
SRCS = Bureaucrat.cpp main.cpp
OBJS = $(SRCS:cpp=o)

all: $(NAME)

$(NAME) : $(OBJS)
		$(CXX) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re
