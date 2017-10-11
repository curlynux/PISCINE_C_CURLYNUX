#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adi-rosa <yfuks@student.42.fr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/20 15:27:58 by adi-rosa          #+#    #+#              #
#    Updated: 2017/07/22 15:26:02 by adi-rosa         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

CC	=	gcc

RM	=	rm -f

SRC	=	main.c		\
		tools.c		\
		disp.c		\
		ft_putnbr.c	\
		rush.c

OBJ	=	$(SRC:.c=.o)

NAME	=	colle-2

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(OBJ) $(NAME)

re: fclean all

.PHONY: all clean fclean re
