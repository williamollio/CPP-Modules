# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jhagedor <jhagedor@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/22 10:47:24 by jhagedor          #+#    #+#              #
#    Updated: 2022/01/22 15:01:12 by jhagedor         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex01

SRC = main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp

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