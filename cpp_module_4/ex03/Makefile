CXX = c++
NAME = materia
CPPFLAGS = -Werror -Wall -Wextra -std=c++98 #-fsanitize=address
SRCS = AMateria.cpp Character.cpp Cure.cpp Ice.cpp ICharacter.cpp IMateriaSource.cpp MateriaSource.cpp main.cpp
OBJS = $(SRCS:cpp=o)

all: $(NAME)

$(NAME) : $(OBJS)
		$(CXX) $(CPPFLAGS) $(OBJS) -o $(NAME)

fclean:
	rm -rf $(OBJS) $(NAME)

re: fclean all

.PHONY : all fclean re
