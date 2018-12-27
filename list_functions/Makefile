# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agrodzin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/27 10:00:09 by agrodzin          #+#    #+#              #
#    Updated: 2018/12/27 10:00:11 by agrodzin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=gcc
CFLAGS=-I -Wall -Werror -Wextra -c
SRCS=ft_lstadd.c\
ft_lstdel.c\
ft_lstdelone.c\
ft_lstiter.c\
ft_lstmap.c\
ft_lstnew.c
OBJ=$(SRCS:%.c=%.o)

all: $(OBJ)

$(OBJ):
	$(CC) $(CFLAGS) $(SRCS)
clean:
	/bin/rm -f $(OBJ)

fclean:
	/bin/rm -f $(OBJ)
	
re: fclean all

