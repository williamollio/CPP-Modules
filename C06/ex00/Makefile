NAME = scalar

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp conversion.cpp is.cpp if.cpp

OBJ = $(SRC:.cpp=.o)

HEAD = conversion.hpp

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