##
## Makefile for Makefile in /home/jeremy.elkaim/PSU_2016_my_ls
## 
## Made by jeremy elkaim
## Login   <jeremy.elkaim@epitech.net>
## 
## Started on  Mon Nov 21 14:00:06 2016 jeremy elkaim
## Last update Wed Nov 30 11:01:28 2016 jeremy elkaim
##

NAME    = my_ls

SRC    = my_ls.c	\
	 function.c	\
	 ls.c		\
	 sort.c		\

OBJ    = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
		gcc $(OBJ) -o $(NAME)

clean:
		rm -rf $(OBJS)

fclean:			clean
			rm -rf $(NAME)

re:			fclean all

.PHONY:			all clean fclean re
