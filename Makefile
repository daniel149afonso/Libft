# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: daniel149afonso <daniel149afonso@studen    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/04 13:14:47 by daafonso          #+#    #+#              #
#    Updated: 2025/11/07 23:04:57 by daniel149af      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

DIR = src
SRC = $(DIR)/ft_atoi.c \
$(DIR)/ft_bzero.c \
$(DIR)/ft_calloc.c \
$(DIR)/ft_isalnum.c \
$(DIR)/ft_isalpha.c \
$(DIR)/ft_isascii.c \
$(DIR)/ft_isdigit.c \
$(DIR)/ft_isprint.c \
$(DIR)/ft_itoa.c \
$(DIR)/ft_memchr.c	\
$(DIR)/ft_memmove.c \
$(DIR)/ft_memcmp.c \
$(DIR)/ft_memcpy.c \
$(DIR)/ft_memset.c \
$(DIR)/ft_putchar_fd.c \
$(DIR)/ft_putendl_fd.c \
$(DIR)/ft_putnbr_fd.c \
$(DIR)/ft_putstr_fd.c \
$(DIR)/ft_split.c \
$(DIR)/ft_strchr.c \
$(DIR)/ft_strdup.c \
$(DIR)/ft_striteri.c \
$(DIR)/ft_strmapi.c \
$(DIR)/ft_strjoin.c \
$(DIR)/ft_strlcat.c \
$(DIR)/ft_strlcpy.c \
$(DIR)/ft_strlen.c \
$(DIR)/ft_strncmp.c \
$(DIR)/ft_strnstr.c \
$(DIR)/ft_strrchr.c \
$(DIR)/ft_substr.c \
$(DIR)/ft_strtrim.c \
$(DIR)/ft_tolower.c \
$(DIR)/ft_toupper.c

BONUS 		= $(DIR)/ft_lstadd_back_bonus.c $(DIR)/ft_lstadd_front_bonus.c $(DIR)/ft_lstclear_bonus.c \
			$(DIR)/ft_lstdelone_bonus.c $(DIR)/ft_lstiter_bonus.c $(DIR)/ft_lstlast_bonus.c \
			$(DIR)/ft_lstmap_bonus.c $(DIR)/ft_lstnew_bonus.c $(DIR)/ft_lstsize_bonus.c

SRCSALL 	= 		${SRC} ${BONUS}

OBJS		=		$(SRC:.c=.o)

OBJSALL		=		${SRCSALL:.c=.o}

CC			= 		gcc
RM			= 		rm -f
CFLAGS		= 		-Wall -Wextra -Werror

NAME		=		libft.a


all:		$(NAME)

$(NAME):	$(OBJS)
			ar rcs $(NAME) $(OBJS)

bonus:		${OBJSALL}
			ar rcs $(NAME) $(OBJSALL)

%.o: %.c
			$(CC) $(CFLAGS) -c $< -o $@

clean:
			$(RM) $(OBJS) $(OBJSALL)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re bonus
