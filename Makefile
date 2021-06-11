##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile malloc
##

SRC				=	Parser.cpp		\
					Input.cpp		\
					Output.cpp		\
					Clock.cpp		\
					C4001.cpp		\
					C4030.cpp		\
					C4040.cpp		\
					C4011.cpp		\
					C4071.cpp		\
					C4081.cpp		\
					C4069.cpp		\
					main.cpp		\
					True.cpp		\
					False.cpp
					

OBJ				=	$(SRC:.cpp=.o)

NAME			=	nanotekspice

all:
	g++ -o $(NAME) $(SRC)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY: fclean re all clean