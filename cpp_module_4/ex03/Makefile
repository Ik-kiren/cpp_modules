CXX = c++
NAME = materia
CPPFLAGS = -Werror -Wall -Wextra -std=c++98 #-fsanitize=address
SRCS = AMateria.cpp Character.cpp ICharacter.cpp  Cure.cpp Ice.cpp MateriaSource.cpp main.cpp
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
