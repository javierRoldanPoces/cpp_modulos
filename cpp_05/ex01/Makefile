NAME =	form

SRC =	main.cpp		\
		Bureaucrat.cpp	\
		Form.cpp		\

CC = c++

$(OBJT):	$(SRC)
		$(CC) -c $@ $^

CFLAGS = -Wall -Wextra -Werror

C++FLAG = -std=c++98

RM = rm -f

#MAKEFLAGS += --quiet

all: $(NAME)

$(NAME): $(OBJT)
	${CC} $(CFLAGS) $(C++FLAG) $(SRC) -o ${NAME}

clean:
	$(RM) -r $(OBJT)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY : all clean fclean re
