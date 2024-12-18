CPP	= c++
CFLAGS	= -Wall -Wextra -Werror  -std=c++98
SRCS	= main.cpp Animal.cpp Cat.cpp Dog.cpp WrongCat.cpp WrongAnimal.cpp
OBJS	= $(SRCS:.cpp=.o)
NAME	= Animal

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp ClapTrap.hpp
	$(CPP) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all

