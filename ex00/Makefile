NAME	= Animal
CXX		= g++
CFLAGS	= -Wall -Werror -Wextra -std=c++98

SRCS	= main.cpp Animal.cpp Cat.cpp Dog.cpp
OBJECT	= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME) : $(OBJECT)
	$(CXX) $(CFLAGS) -o $(NAME) $(OBJECT)

%.o: %.cpp
	$(CXX) $(CFLAGS) -c $< -o $@

clean:
	rm -rf *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re