NAME		= Animal
WRONGNAME	= WrongMain
CXX			= c++
CXXFLAGS	= -Wall -Werror -Wextra -std=c++98
CXXFLAGS	+= -Iinclude

SRCS		= AAnimal.cpp Brain.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp
SRCS_MAIN	= $(SRCS) main.cpp
SRCS_WRONG	= $(SRCS) wrongMain.cpp
OBJS_MAIN	= $(SRCS_MAIN:.cpp=.o)
OBJS_WRONG	= $(SRCS_WRONG:.cpp=.o)

all: $(NAME)

$(NAME) : $(OBJS_MAIN)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS_MAIN)

wrong: $(WRONGNAME)

$(WRONGNAME) : $(OBJS_WRONG)
	$(CXX) $(CXXFLAGS) -o $(WRONGNAME) $(OBJS_WRONG)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS_MAIN) wrongMain.o

fclean: clean
	rm -f $(NAME) $(WRONGNAME)

re: fclean all

.PHONY: all wrong clean fclean re
