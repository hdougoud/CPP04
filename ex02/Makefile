NAME		= Animal
WRONGNAME	= WrongMain
CXX			= c++
CXXFLAGS	= -Wall -Werror -Wextra -std=c++98
CXXFLAGS	+= -Iinclude

SRCS_DIR	= srcs/
SRCS_FILES	= AAnimal.cpp Brain.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp
SRCS_MAIN	= $(SRCS_FILES) main.cpp
SRCS_WRONG	= $(SRCS_FILES) wrongMain.cpp

BUILD_DIR	= build/
OBJS_MAIN	= $(addprefix $(BUILD_DIR), $(SRCS_MAIN:.cpp=.o))
OBJS_WRONG	= $(addprefix $(BUILD_DIR), $(SRCS_WRONG:.cpp=.o))

all: $(BUILD_DIR) $(NAME)

$(NAME) : $(OBJS_MAIN)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS_MAIN)

wrong: $(BUILD_DIR) $(WRONGNAME)

$(WRONGNAME) : $(BUILD_DIR) $(OBJS_WRONG)
	$(CXX) $(CXXFLAGS) -o $(WRONGNAME) $(OBJS_WRONG)

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

$(BUILD_DIR)%.o: $(SRCS_DIR)%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(BUILD_DIR)

fclean: clean
	rm -f $(NAME) $(WRONGNAME)

re: fclean all

.PHONY: all wrong clean fclean re
