NAME = zombie

CC = clang++

CFLAGS = -Wall -Wextra -Werror

SRC = main.cpp Zombie.cpp ZombieHorde.cpp

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(SRC)
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
