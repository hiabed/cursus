# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhassani <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/15 21:17:28 by mhassani          #+#    #+#              #
#    Updated: 2022/11/15 21:17:34 by mhassani         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CFILES = ft_printf.c\
		ft_putchar.c\
		ft_putnbr.c\
		ft_putstr.c\
		ntohex_up.c\
		ntohex.c\
		print_pointer.c\
		print_uns_num.c\

OBJ = ${CFILES:.c=.o}
CFLAGS = -Wall -Wextra -Werror
CC = cc
LI = ar -rc
HEAD = ft_printf.h

all : ${NAME}

${NAME} : ${OBJ}
	${LI} ${NAME} ${OBJ}

clean :
	${RM} ${OBJ}

fclean : clean
	${RM} ${NAME}

re : fclean all
