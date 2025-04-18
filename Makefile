# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ouamarko <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/26 20:02:57 by ouamarko          #+#    #+#              #
#    Updated: 2025/04/18 21:04:05 by ouamarko         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC	= ft_isalpha.c \
	  ft_isdigit.c \
	  ft_isalnum.c \
	  ft_isascii.c \
	  ft_isprint.c \
	  ft_strlen.c \
	  ft_memset.c \
	  ft_bzero.c \
	  ft_memcpy.c \
	  ft_memmove.c \
	  ft_strlcpy.c \
	  ft_strlcat.c \
	  ft_toupper.c \
	  ft_tolower.c \
	  ft_strchr.c \
	  ft_strrchr.c \
	  ft_strncmp.c\


OBJS	= ${SRC:.c=.o}

PRE	= ./srcs/

HEAD	= ./includes/

NAME	= libft.a

AR	= ar rc

RM	= rm -f

LIB	= ranlib

GCC	= gcc

CFLAGS	= -Wall -Wextra -Werror

all:	${NAME}

.c.o:	${GCC} ${CFLAGS} -c -I ${HEAD} $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${AR} ${NAME} ${OBJS}
			${LIB} ${NAME}

clean:
		rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
