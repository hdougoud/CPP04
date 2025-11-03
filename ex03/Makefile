NAME		= Materia
CXX			= g++
CXXFLAGS	= -Wall -Werror -Wextra -std=c++98
CXXFLAGS	+= -Iinclude

BUILD_DIR	= build/
SRCS_DIR	= srcs/

FILES_SRCS	= main.cpp AMateria.cpp Character.cpp Cure.cpp Floor.cpp Ice.cpp MateriaSource.cpp
SRCS		= $(addprefix $(SRCS_DIR), $(FILES_SRCS))
OBJS		= $(addprefix $(BUILD_DIR), $(FILES_SRCS:.cpp=.o))

all: $(BUILD_DIR) $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

$(BUILD_DIR)%.o: $(SRCS_DIR)%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(BUILD_DIR) :
	mkdir -p $(BUILD_DIR)

clean:
	rm -rf $(BUILD_DIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
