NAME = Account

CC = clang++

CFLAGS =

SRC = tests.cpp Account.cpp

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
