# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: heinfalt <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/09 12:59:15 by heinfalt          #+#    #+#              #
#    Updated: 2016/12/05 12:47:28 by heinfalt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: clean, fclean, re

.SUFFIXES:

NAME = libft.a

CC = gcc

SRCC = *.c

SRCO = *.o

CFLAGS = -Wall -Wextra -Werror

all: $(NAME) libft.h

%.o: %.c
	$(CC) $(CFLAGS) -c $(SRCC)

$(NAME): $(SRCO)
	ar rc $(NAME) $(SRCO) && ranlib $(NAME)

clean:
	rm -f $(SRCO) libft.h.gch

fclean: clean
	rm -f $(NAME)

re: fclean all
