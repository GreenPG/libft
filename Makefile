# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/28 13:38:40 by gpasquet          #+#    #+#              #
#    Updated: 2022/09/30 17:22:56 by gpasquet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCC	= ft_isalpha.c ft_isalnum.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memset.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_bzero.c ft_strchr.c ft_strrchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strdup.c ft_atoi.c ft_tolower.c ft_toupper.c ft_calloc.c 

OBJS	=  ft_isalpha.o ft_isalnum.o ft_isascii.o ft_isdigit.o ft_isprint.o ft_memset.o ft_memchr.o ft_memcmp.o ft_memcpy.o ft_memmove.o ft_bzero.o ft_strchr.o ft_strrchr.o ft_strlcat.o ft_strlcpy.o ft_strlen.o ft_strncmp.o ft_strnstr.o ft_strdup.o ft_atoi.o ft_tolower.o ft_toupper.o ft_calloc.o

NAME	= libft.a

RM	= rm -f

${NAME}:
	gcc -c -Wall -Wextra -Werror ${SRCC}
	ar rc ${NAME} ${OBJS}

all:	${NAME}

clean:	
	${RM} ${OBJS}

fclean:	clean
	${RM} ${NAME}

re:	fclean all

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCC)
	gcc -nostartfiles -shared -o libft.so $(OBJS)
