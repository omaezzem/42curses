# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/22 10:32:08 by omaezzem          #+#    #+#              #
#    Updated: 2024/11/22 10:32:08 by omaezzem         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = printf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

MAIN_SOURCES = ft_adrs.c ft_putchar.c ft_putstr.c \
				ft_unsigned_putnbr.c ft_putnbr.c ft_pt.c \
				ft_hex.c ft_decitohex.c 

MAIN_OBJECTS = $(MAIN_SOURCES:.c=.o)

all : $(NAME)

$(NAME) : $(MAIN_OBJECTS)
	ar r $(NAME) $(MAIN_OBJECTS)

%.o: %.c printf.h
	$(CC) -c $(CFLAGS) $< -o $@

clean :
	@rm -f $(MAIN_OBJECTS)
fclean : clean
	@rm -f $(NAME)

re : fclean all