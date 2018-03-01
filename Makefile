##
## Makefile for Makefile in /home/bechad_p/cpp_santa
## 
## Made by Pierre Bechade
## Login   <bechad_p@epitech.net>
## 
## Started on  Sun Jan 18 03:14:00 2015 Pierre Bechade
## Last update Sun Jan 18 03:34:14 2015 Pierre Bechade
##

CC	=	g++

RM	=	rm -f

CPPFLAGS	=	-W -Wall -Werror -I./include/

NAME	=	santa

SRCS	=	src/main.cpp		\
		src/Box.cpp		\
		src/ConveyorBelt.cpp	\
		src/ElfOfPePeNoel.cpp	\
		src/GiftPaper.cpp	\
		src/LittlePony.cpp	\
		src/Object.cpp		\
		src/Table.cpp		\
		src/Teddy.cpp		\
		src/Toy.cpp		\
		src/Wrap.cpp


OBJS	=	$(SRCS:.cpp=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
		$(CC) -o $(NAME) $(OBJS) $(CPPFLAGS)

clean:
		$(RM) $(OBJS)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all
