NAME		= Animal
CXX			= g++
CXXFLAGS	= -Wall -Werror -Wextra -std=c++98 -Iinclude

SRCS_DIR	= srcs/
SRCS_FILES 	= main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp
SRCS		= $(addprefix $(SRCS_DIR), $(SRCS_FILES))

BUILD_DIR	= build/
OBJS		= $(addprefix $(BUILD_DIR), $(SRCS_FILES:.cpp=.o))

all: $(BUILD_DIR) $(NAME)

$(BUILD_DIR) :
	mkdir -p $(BUILD_DIR)

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

$(BUILD_DIR)%.o: $(SRCS_DIR)%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(BUILD_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
