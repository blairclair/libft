# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agrodzin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/19 20:54:26 by agrodzin          #+#    #+#              #
#    Updated: 2018/03/22 14:01:07 by agrodzin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=gcc
CFLAGS=-I -Wall -Werror -Wextra -c
NAME=libft.a
LIB=ar rc
OBJ=*.o
all: $(NAME)

$(NAME):
	make -C list_functions/
	make -C memory_functions/
	make -C other_functions/
	make -C print_functions/
	make -C string_functions/
	cp -f list_functions/*.o .
	cp -f memory_functions/*.o .
	cp -f other_functions/*.o .
	cp -f print_functions/*.o .
	cp -f string_functions/*.o .
	$(LIB) $(NAME) $(OBJ)
	ranlib $(NAME)
clean:
	/bin/rm -f $(OBJ)
	make -C list_functions/ clean
	make -C memory_functions/ clean
	make -C other_functions/ clean
	make -C print_functions/ clean
	make -C string_functions/ clean
fclean:
	/bin/rm -f $(OBJ) $(NAME)
	make -C list_functions/ fclean
	make -C memory_functions/ fclean
	make -C other_functions/ fclean
	make -C print_functions/ fclean
	make -C string_functions/ fclean
	
re: fclean all
