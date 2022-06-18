# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlara-na <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/13 17:02:15 by jlara-na          #+#    #+#              #
#    Updated: 2022/06/17 21:11:59 by jlara-na         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FILES_C = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c
FILES_O = $(FILES_C:.c=.o)
#CFILES_BONUS = 
#OFILES_BONUS = 
CC = gcc
FLAGS = -Werror -Wextra -Wall

all: $(NAME)
$(NAME): $(FILES_O)
	ar -rc $(NAME) $(FILES_O)
clean:
	rm -f $(FILES_O) #$(OFILES_BONUS)
fclean: clean
	rm -f $(NAME)
re: fclean $(NAME)
#bonus: $(NAME) $(OFILES_BONUS)
#	ar rc $(NAME) $(OFILES_BONUS)
prueba: 
	$(CC) $(FLAGS) main.c $(FILES_C)
.PHONY: all clean fclean re
