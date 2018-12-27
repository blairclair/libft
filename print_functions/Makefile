# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agrodzin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/27 10:08:34 by agrodzin          #+#    #+#              #
#    Updated: 2018/12/27 10:08:41 by agrodzin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=gcc
CFLAGS=-I -Wall -Werror -Wextra -c
SRCS=ft_putchar.c\
ft_putchar_fd.c\
ft_putendl.c\
ft_putendl_fd.c\
ft_putnbr.c\
ft_putnbr_fd.c\
ft_putstr.c\
ft_putstr_fd.c
NAME=print_funcs.a
LIB=ar rs
OBJ=$(SRCS:%.c=%.o)

all: $(OBJ)

$(OBJ):
	$(CC) $(CFLAGS) $(SRCS)

clean:
	/bin/rm -f $(OBJ)

fclean:
	/bin/rm -f $(OBJ) $(NAME)
	
re: fclean all

