NAME = sed
SRCS = sed.hpp sed.cpp main.cpp
OBJS = $(SRCS:cpp=o)

all: $(NAME)

$(NAME) : $(OBJS)
		g++ -Werror -Wall -Wextra -std=c++98 $(OBJS) -o $(NAME)