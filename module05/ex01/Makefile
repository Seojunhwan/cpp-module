NAME = Form
SRCS = main.cpp Bureaucrat.cpp Form.cpp
OBJS = $(SRCS:.cpp=.o)
FLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++

all: $(NAME)

$(NAME) : $(OBJS)
			$(CC) $(FLAGS) $(OBJS) -o $(NAME)
clean:
	rm -f $(OBJS)
fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
