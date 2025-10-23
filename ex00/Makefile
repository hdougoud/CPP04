NAME		= Animal
CXX			= c++
CXXFLAGS	= -Wall -Werror -Wextra -std=c++98

SRCS 		= main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp
OBJS		= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean all
	rm -f $(NAME)

re: clean all

.PHONY: all clean fclean re
