
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wollio <wollio@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/30 13:38:35 by coder             #+#    #+#              #
#    Updated: 2022/01/27 11:27:36 by wollio           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bureaucrat

CC = c++
CFLAGS = -Wall -Werror -Wextra

SDIR = src
SRC =	main.cpp						\
		Bureaucrat.cpp					\
		Form.cpp						\
		PresidentialPardonForm.cpp		\
		RobotomyRequestForm.cpp			\
		ShrubberyCreationForm.cpp

ODIR = obj
OBJ = $(patsubst %.cpp, %.o, $(SRC))

all: $(NAME)

$(NAME): $(addprefix $(SDIR)/, $(SRC))
		$(CC) $(CFLAGS) -c $^
		mkdir -p $(ODIR)
		mv $(OBJ) $(ODIR)
		$(CC) $(CFLAGS) $(addprefix $(ODIR)/, $(OBJ)) -o $(NAME)

clean:
		rm -rf $(ODIR)
		rm -rf *_shrubbery

fclean:	clean
		rm -rf $(NAME)

re: fclean all