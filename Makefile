# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/04 13:14:47 by daafonso          #+#    #+#              #
#    Updated: 2024/10/06 22:22:58 by daniel149af      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_atoi.c \
ft_isalnum.c \
ft_isalpha.c \
ft_isascii.c \
ft_isdigit.c \
ft_isprint.c \
ft_memchr.c	\
ft_memmove.c	\
ft_memcmp.c \
ft_memcpy.c \
ft_memset.c \
ft_strdup.c \
ft_strlcpy.c \
ft_strlen.c \
ft_strncmp.c \
ft_strnstr.c

OBJS		=		$(SRC:.c=.o)

CC			= 		gcc
RM			= 		rm -f
CFLAGS		= 		-Wall -Wextra -Werror

NAME		=		libft.a

all:		$(NAME)

$(NAME):	$(OBJS)
			ar rcs $(NAME) $(OBJS)

%.o: %.c
			$(CC) $(CFLAGS) -c $< -o $@

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all
