# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jhagedor <jhagedor@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/23 19:04:40 by jhagedor          #+#    #+#              #
#    Updated: 2022/01/27 14:50:54 by jhagedor         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex03

SRC = 	main.cpp \
		AMateria.cpp \
		Ice.cpp \
		Cure.cpp \
		Character.cpp \
		MateriaSource.cpp

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