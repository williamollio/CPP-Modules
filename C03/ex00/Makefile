NAME = ClapTrap

CC = clang++

CFLAGS = -Wall -Wextra -Werror

SRC = main.cpp ClapTrap.cpp

OBJ = $(SRC:.cpp=.o)

HEAD = ClapTrap.hpp

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
