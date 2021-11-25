# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmanouze <mmanouze@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/14 17:44:06 by mmanouze          #+#    #+#              #
#    Updated: 2021/11/24 13:33:20 by mmanouze         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_isalnum.c \
ft_isprint.c \
ft_strlcat.c \
ft_strncmp.c \
ft_atoi.c \
ft_isalpha.c \
ft_strchr.c \
ft_strlcpy.c \
ft_strnstr.c \
ft_tolower.c \
ft_bzero.c \
ft_isascii.c \
ft_memcpy.c \
ft_strdup.c \
ft_strlen.c \
ft_strrchr.c \
ft_toupper.c \
ft_calloc.c \
ft_isdigit.c \
ft_memchr.c \
ft_memset.c \
ft_strmapi.c \
ft_substr.c \
ft_strjoin.c \
ft_putchar_fd.c \
ft_putstr_fd.c \
ft_putendl_fd.c \
ft_putnbr_fd.c \
ft_memcmp.c \
ft_memmove.c \
ft_itoa.c \
ft_strtrim.c \
ft_split.c \
ft_striteri.c

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
OBJS = ${SRCS:.c=.o}

${NAME}: ${OBJS}
	${CC} ${CFLAGS} -c ${SRCS} 
	ar -rcs ${NAME} ${OBJS}

all: ${NAME}

clean:
	rm -f ${OBJS}

fclean:    clean
	rm -f ${NAME}

re:    fclean all

.PHONY: all clean fclean re
