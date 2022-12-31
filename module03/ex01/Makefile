NAME = a.out

CC = c++
CPPFLAGS = -std=c++98 -Wall -Wextra -Werror

SRCS = main.cpp \
		ClapTrap.cpp \
		ScavTrap.cpp
OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CPPFLAGS) -o $@ $^

clean :
	$(RM) $(OBJS)

fclean :
	$(RM) $(OBJS)
	$(RM) $(NAME)

re :
	$(MAKE) fclean
	$(MAKE) all

.PHONY : all clean fclean re
