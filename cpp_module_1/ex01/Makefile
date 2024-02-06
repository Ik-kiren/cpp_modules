NAME = horde
SRCS = zombie.cpp zombieHorde.cpp main.cpp
OBJS = $(SRCS:cpp=o)

all: $(NAME)

$(NAME) : $(OBJS)
		g++ -Werror -Wall -Wextra -std=c++98 $(OBJS) -o $(NAME)