# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/25 15:43:05 by omaezzem          #+#    #+#              #
#    Updated: 2024/11/18 20:23:24 by omaezzem         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

MAIN_SOURCES =   ft_isalpha.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c \
	ft_bzero.c ft_memcpy.c ft_memmove.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strncmp.c ft_strdup.c \
	ft_atoi.c ft_strlcat.c ft_isdigit.c ft_strjoin.c ft_substr.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
	ft_calloc.c ft_strrchr.c ft_strlcpy.c ft_strtrim.c ft_putchar_fd.c ft_putnbr_fd.c ft_putendl_fd.c ft_putstr_fd.c \
	ft_itoa.c ft_striteri.c ft_strmapi.c ft_split.c \

BFILES = ft_lstadd_front_bonus.c ft_lstadd_back_bonus.c ft_lstclear_bonus.c \
	ft_lstdelone_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c\
	ft_lstlast_bonus.c

MAIN_OBJECTS = $(MAIN_SOURCES:.c=.o)
MAIN_BOBJECTS = $(BFILES:.c=.o)

all : $(NAME)

$(NAME) : $(MAIN_OBJECTS)
	ar r $(NAME) $(MAIN_OBJECTS)

bonus: $(MAIN_BOBJECTS)
	ar r $(NAME) $(MAIN_BOBJECTS)

%.o: %.c libft.h
	$(CC) -c $(CFLAGS) $< -o $@

clean :
	@rm -f $(MAIN_OBJECTS) $(MAIN_BOBJECTS)

fclean : clean
	@rm -f $(NAME)

re : fclean all
