CXX = c++
NAME = animal
CPPFLAGS = -Werror -Wall -Wextra -std=c++98
SRCS = Animal.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp Dog.cpp main.cpp
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
