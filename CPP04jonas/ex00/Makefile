# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jhagedor <jhagedor@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/22 10:47:24 by jhagedor          #+#    #+#              #
#    Updated: 2022/01/23 17:02:53 by jhagedor         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex00

SRC = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp

OBJS = $(SRCS:.cpp=.o)

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(SRC) -o $@

clean:
	rm -fr $(OBJS)

fclean:
	make clean
	rm -f $(NAME)

re: fclean all