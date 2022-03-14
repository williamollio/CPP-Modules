NAME = serialization

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp A.cpp B.cpp C.cpp Base.cpp

OBJ = $(SRC:.cpp=.o)

HEAD = A.hpp B.hpp C.hpp Base.hpp

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