NAME		= Materia
CXX			= g++
CXXFLAGS	= -Wall -Werror -Wextra -std=c++98
CXXFLAGS	+= -Iinclude

BUILD_DIR	= build/
DIR_SRCS	= srcs/
FILES_SRCS	= main.cpp AMateria.cpp Character.cpp Cure.cpp Floor.cpp Ice.cpp MateriaSource.cpp
SRCS		= $(addprefix($(DIR_SRCS), $(FILES_SRCS)))
OBJS		= $(FILES_SRCS:.cpp=.o)

all: $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

$(BUILD_DIR)%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
