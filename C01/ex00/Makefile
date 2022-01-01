NAME = zombie

CC = clang++

CFLAGS =

SRC = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean :
	rm -rf $(OBJ)

fclean :
	rm -rf $(OBJ)
	rm -rf  $(NAME)

re :
	make fclean
	make $(NAME)
