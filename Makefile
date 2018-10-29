##
## Makefile for Makefile in /home/da-pur_c/rendu/Piscine_C_infinadd/lib/my
## 
## Made by Clément DA PURIFICACAO
## Login   <da-pur_c@epitech.net>
## 
## Started on  Mon Oct 19 09:17:21 2015 Clément DA PURIFICACAO
## Last update Fri Dec 16 06:04:31 2016 Clem Da
##

NAME	=	my_sokoban

SRCS	=	srcs/my_sokoban.c	\
		srcs/my_strlen.c	\
		srcs/my_strcat.c	\
		srcs/aff_tab.c		\
		srcs/boite.c		\
		srcs/key.c		\
		srcs/my_error.c		\
		srcs/my_read.c		\
		srcs/pos.c		\
		srcs/tab_char.c		\
		srcs/parsing.c		\
		srcs/alone.c

OBJS	=	$(SRCS:.c=.o)

INC	=	-I./includes/

LIBS	=	-lncurses

CFLAGS =	-g $(INC) $(LIBS)

CC	=	gcc

RM	=	rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS) $(CFLAGS)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all
