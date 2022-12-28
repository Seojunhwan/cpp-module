NAME = a.out

CXX = c++
CXXFLAGS = -std=c++98 -Wall -Wextra -Werror

SRCS = main.cpp \
		Cat.cpp \
		Dog.cpp \
		AAnimal.cpp \
		WrongAnimal.cpp \
		WrongCat.cpp \
		Brain.cpp

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

clean :
	$(RM) $(OBJS)

fclean :
	$(RM) $(OBJS)
	$(RM) $(NAME)

re :
	$(MAKE) fclean
	$(MAKE) all

.PHONY : all clean fclean re
