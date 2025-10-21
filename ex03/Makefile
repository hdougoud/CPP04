NAME	= Materia
CXX		= g++
CFLAGS	= -Wall -Werror -Wextra -std=c++98 -g

SRCS	= main.cpp AMateria.cpp Character.cpp MateriaSource.cpp Ice.cpp Cure.cpp Floor.cpp
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
