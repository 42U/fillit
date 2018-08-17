# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: issmith <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/16 19:52:51 by issmith           #+#    #+#              #
#    Updated: 2018/08/16 21:29:38 by issmith          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LN = libft.a
PROJ = fillit
NAME = fillit

INCL = -I./incl/
SRCS = ./srcs/ft_*.c

OBJ = ft_*.o
MN = main.c

CC = gcc
DB = -g
CFLAGS = -Wall -Werror -Wextra -c
FLAG = -Wall -Werror -Wextra
L = -L. -l
AR = ar rc
RL = ranlib
RM = /bin/rm -rf

.PHONY: clean fclean re beta gg test lib dbg

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRCS) $(INCL)
	$(AR) $(LN) $(OBJ)
	$(RL) $(LN)

lib:
	$(CC) $(CFLAGS) $(SRCS) $(INCL)
	$(AR) $(LN) $(OBJ)
	$(RL) $(LN)
	$(RM) $(OBJ)

clean:
	$(RM) $(OBJ) a.out*

fclean:	clean
	$(RM) $(LN) a.out

re: fclean all

dbg:
	$(CC) $(DB) $(SRCS) $(LN) $(MN) $(INCL)
	
test:
	$(CC) $(CFLAGS) $(SRCS) $(INCL)
	$(AR) $(LN) $(OBJ)
	$(RL) $(LN)
	$(RM) $(OBJ)
	$(CC) $(FLAG) $(LN) $(MN) $(INCL)

beta:
	$(CC) $(CFLAGS) $(SRCS) $(INCL)
	$(AR) $(LN) $(OBJ)
	$(RL) $(LN)
	$(RM) $(OBJ)
	$(CC) -o beta $(INCL) $(L)ft $(MN)

gg:
	$(CC) $(FLAG) $(LN) $(MN)

ctd: clean dbg


