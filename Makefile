# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anolivei <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/21 20:08:14 by anolivei          #+#    #+#              #
#    Updated: 2020/01/29 01:21:29 by anolivei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FUNCTIONS = ft_memset.c		\
			ft_bzero.c		\
			ft_memcpy.c		\
			ft_memccpy.c	\
			ft_memmove.c	\
			ft_strlen.c		\
			ft_atoi.c		\
			ft_isalnum.c	\
			ft_isalpha.c	\
			ft_isdigit.c	\
			ft_isascii.c	\
			ft_isprint.c	\
			ft_strlcpy.c	\
			ft_strlcat.c	\
			ft_strncmp.c	\
			ft_tolower.c	\
			ft_toupper.c	\
			ft_strchr.c		\
			ft_strrchr.c	\
			ft_strnstr.c	\
			ft_memchr.c		\
			ft_memcmp.c		\
			ft_calloc.c		\
			ft_strdup.c		\
			ft_substr.c		\
			ft_strjoin.c	\
			ft_strtrim.c	\
			ft_split.c		\
			ft_itoa.c		\
			ft_strmapi.c	\
			ft_putchar_fd.c

OBJ = 	ft_memset.o		\
		ft_bzero.o		\
		ft_memcpy.o		\
		ft_memccpy.o	\
		ft_memmove.o	\
		ft_strlen.o		\
		ft_atoi.o		\
		ft_isalnum.o	\
		ft_isalpha.o	\
		ft_isdigit.o	\
		ft_isascii.o	\
		ft_isprint.o	\
		ft_strlcpy.o	\
		ft_strlcat.o	\
		ft_strncmp.o	\
		ft_tolower.o	\
		ft_toupper.o	\
		ft_strchr.o		\
		ft_strrchr.o	\
		ft_strnstr.o	\
		ft_memchr.o		\
		ft_memcmp.o		\
		ft_calloc.o		\
		ft_strdup.o		\
		ft_substr.o		\
		ft_strjoin.o	\
		ft_strtrim.o	\
		ft_split.o		\
		ft_itoa.o		\
		ft_strmapi.o	\
		ft_putchar_fd.o

MAIN = main.c

all: $(NAME)

HEAD = ./

$(NAME):
	@gcc -Wall -Wextra -Werror -c $(FUNCTIONS) -I $(HEAD) && ar rc $(NAME) $(OBJ)

main:
	@gcc -Wall -Werror -Wextra -o $(NAME) $(FUNCTIONS) $(MAIN)

clean:
	@/bin/rm -f $(OBJ)

fclean: clean
	@/bin/rm -f $(NAME)
	
re: fclean all
