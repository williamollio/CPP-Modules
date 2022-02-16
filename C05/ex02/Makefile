NAME = Form

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Bureaucrat.cpp Form.cpp

OBJ = $(SRC:.cpp=.o)

HEAD = Bureaucrat.hpp Form.hpp

all : $(NAME)

$(NAME) : $(SRC) $(HEAD)
	$(CC) $(CFLAGS) -c $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean :
	rm -rf $(OBJ)

fclean :
	rm -rf $(OBJ)
	rm -rf  $(NAME)

re :
	make fclean
	make $(NAME)