CXX = c++
NAME = brain
CPPFLAGS = -Werror -Wall -Wextra -std=c++98 #-fsanitize=address
SRCS = WrongAnimal.cpp WrongCat.cpp Animal.cpp Cat.cpp Brain.cpp Dog.cpp main.cpp
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