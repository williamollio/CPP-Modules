NAME = DiamondTrap

CC = clang++

CFLAGS = -Wall -Wextra -Werror -Wshadow -Wno-shadow

SRC = main.cpp FragTrap.cpp DiamondTrap.cpp ScavTrap.cpp ClapTrap.cpp

OBJ = $(SRC:.cpp=.o)

HEAD = FragTrap.hpp DiamondTrap.hpp ScavTrap.hpp ClapTrap.hpp

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