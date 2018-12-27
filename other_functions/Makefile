# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agrodzin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/27 10:03:05 by agrodzin          #+#    #+#              #
#    Updated: 2018/12/27 10:03:07 by agrodzin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=gcc
CFLAGS=-I -Wall -Werror -Wextra -c
SRCS=ft_atoi.c\
ft_bzero.c\
ft_isalnum.c\
ft_isalpha.c\
ft_isascii.c\
ft_isdigit.c\
ft_isprint.c\
ft_itoa.c\
ft_tolower.c\
ft_toupper.c
OBJ=$(SRCS:%.c=%.o)

all: $(OBJ)

$(OBJ):
	$(CC) $(CFLAGS) $(SRCS)
clean:
	/bin/rm -f $(OBJ) $(NAME)

fclean:
	/bin/rm -f $(OBJ)
	
re: fclean all
