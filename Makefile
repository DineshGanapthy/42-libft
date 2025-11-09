# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dganapat <dganapat@student.42kl.edu.m      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/02 14:47:03 by dganapat          #+#    #+#              #
#    Updated: 2025/11/02 20:44:18 by dganapat         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAG = -Wall -Werror -Wextra
AR = ar rcs
SRC = *.c


%.o: %.c
	$(CC) $(FLAGS) -c -o $@ $<

$(NAME): $(OBJS)
	$(AR) $@ $^

all : $(NAME)

clean:
	rm -f $(OBJS) 

fclean: clean
	rm -f $(NAME)

re: clean all

.PHONY: all clean fclean
