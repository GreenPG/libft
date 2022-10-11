# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/28 13:38:40 by gpasquet          #+#    #+#              #
#    Updated: 2022/10/10 18:03:48 by gpasquet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= 	gcc

NAME	= 	libft.a

CFLAGS	= 	-Wall -Wextra -Werror

SRCC	= 	ft_atoi.c 			\
			ft_putstr_fd.c		\
			ft_strmapi.c		\
			ft_bzero.c			\
			ft_memchr.c			\
			ft_split.c			\
			ft_strncmp.c		\
			ft_calloc.c			\
			ft_memcmp.c			\
			ft_strchr.c			\
			ft_strnstr.c		\
			ft_isalnum.c		\
			ft_memcpy.c			\
			ft_strdup.c			\
			ft_strrchr.c		\
			ft_isalpha.c		\
			ft_memmove.c		\
			ft_striteri.c		\
			ft_strtrim.c		\
			ft_isascii.c		\
			ft_memset.c			\
			ft_strjoin.c		\
			ft_substr.c			\
			ft_isdigit.c		\
			ft_putchar_fd.c		\
			ft_strlcat.c		\
			ft_tolower.c		\
			ft_isprint.c		\
			ft_putendl_fd.c		\
			ft_strlcpy.c		\
			ft_toupper.c		\
			ft_itoa.c			\
			ft_putnbr_fd.c		\
			ft_strlen.c

SRCC_B	= 	ft_lstnew.c			\
 			ft_lstadd_front.c	\
			ft_lstsize.c		\
			ft_lstlast.c		\
			ft_lstadd_back.c	\
			ft_lstdelone.c		\
			ft_lstclear.c		\
			ft_lstiter.c		\
			ft_lstmap.c

OBJS	= 	${SRCC:%.c=%.o}

OBJS_B	= 	${SRCC_B:%.c=%.o} 

RM		=	rm -f

${NAME}: ${OBJS} 
	ar rc ${NAME} ${OBJS}

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all:	$(NAME)

bonus: ${OBJS} ${OBJS_B}	
	ar rc ${NAME} ${OBJS} ${OBJS_B}

clean:	
	${RM} ${OBJS} ${OBJS_B} 

fclean:	clean
	${RM} ${NAME}

re:	fclean all

.PHONY: 
	all bonus clean fclean re
