# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/26 13:01:53 by araqioui          #+#    #+#              #
#    Updated: 2023/10/26 13:06:14 by araqioui         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Checker

CC = c++
FLAGS = -Wall -Werror -Wextra
RM = rm -f

SRC = checker
OBJ = $(SRC:=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $@

%.o: %.cpp
	$(CC) $(FLAGS) -c $<

clean:
	@ $(RM) $(OBJ)

fclean: clean
	@ $(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re