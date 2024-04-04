# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: javi <javi@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/04 18:12:01 by javi              #+#    #+#              #
#    Updated: 2024/04/04 18:12:05 by javi             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	Brain

SRC =	main.cpp \

OBJT = $(SRC:.cpp=.o)

CC = c++

CFLAGS = -Wall -Wextra -Werror

C++FLAG = -std=c++98

RM = rm -f

#MAKEFLAGS += --quiet

all: $(NAME)

$(NAME): $(OBJT)
	${CC} $(CFLAGS) $(C++FLAG) $(SRC) -o ${NAME}

clean:
	$(RM) $(OBJT)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY : all clean fclean re