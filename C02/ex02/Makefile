NAME = fixed

CC = clang++

CFLAGS = -Wall -Wextra -Werror

SRC = main.cpp Fixed.cpp

HEAD = $(Fixed.hpp)

OBJ = $(SRC:.cpp=.o)

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
