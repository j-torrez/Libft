# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jtorrez- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/12 17:43:54 by jtorrez-          #+#    #+#              #
#    Updated: 2023/05/12 17:43:57 by jtorrez-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC =	ft_isalnum.c ft_isalpha.c ft_isdigit.c \
		ft_isprint.c ft_isascii.c ft_strlen.c \
		ft_memset.c ft_bzero.c ft_strlcpy.c \
		ft_strlcat.c ft_toupper.c ft_tolower.c \
		ft_strchr.c ft_strrchr.c ft_atoi.c \
		ft_strncmp.c ft_memcpy.c ft_memchr.c \
		ft_memcmp.c ft_memmove.c ft_strnstr.c \
		ft_calloc.c ft_strdup.c

SRC_OBJ = $(SRC:.c=.o)


BONUS_OBJ = $(BONUS:.c=.o)

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
LIB = ar rcs
RM = rm -f

all: $(NAME) bonus

$(NAME): $(SRC_OBJ)
	$(LIB) $(NAME) $(SRC_OBJ)

bonus: $(BONUS_OBJ) $(SRC_OBJ)
	$(LIB) $(NAME) $(BONUS_OBJ) $(SRC_OBJ)
clean:
	$(RM) $(SRC_OBJ) $(BONUS_OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all