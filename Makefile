##
## Makefile for Makefile in /home/genesis/rendu/PSU_2013_minitalk
##
## Made by DerpGenesis
## Login   <genesis@epitech.net>
##
## Started on  Mon Mar 10 15:57:21 2014 DerpGenesis
## Last update Sat Mar 22 15:21:27 2014 DerpGenesis
##

SRC_CLI		= client/cl_main.c \
		  client/my_get_nbr.c \
		  serveur/my_putstr.c \
		  client/convert_str.c \

SRC_SER		= serveur/my_putstr.c \
		  serveur/my_put_nbr.c \
	  	  serveur/sv_main.c

OBJ_CLI		= $(SRC_CLI:.c=.o)

OBJ_SER		= $(SRC_SER:.c=.o)

NAME_CLI	= client/client

NAME_SER	= serveur/serveur

all:		  $(NAME_CLI) $(NAME_SER)

$(NAME_CLI):	  $(OBJ_CLI)
		  cc -o $(NAME_CLI) $(OBJ_CLI)

$(NAME_SER):	  $(OBJ_SER)
		  cc -o $(NAME_SER) $(OBJ_SER)

clean:
		  rm -f $(OBJ_CLI)
		  rm -f $(OBJ_SER)

fclean:		  clean
		  rm -f $(NAME_CLI)
		  rm -f $(NAME_SER)

re:		  fclean all
