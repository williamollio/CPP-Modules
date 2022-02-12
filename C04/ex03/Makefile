NAME = Interface

CC = c++

CFLAGS = -Wall -Wextra -Werror

SRC = main.cpp AMateria.cpp Cure.cpp Ice.cpp ICharacter.cpp MateriaSource.cpp IMateriaSource.cpp

OBJ = $(SRC:.cpp=.o)

HEAD = AMateria.hpp Cure.hpp Ice.hpp ICharacter.hpp MateriaSource.hpp IMateriaSource.hpp

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