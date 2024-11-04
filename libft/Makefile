# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: helde-so <helde-so@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/14 11:02:09 by helde-so          #+#    #+#              #
#    Updated: 2024/11/04 15:24:48 by helde-so         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



NAME = libft.a            
CC = gcc                 
CFLAGS = -Wall -Wextra -Werror  
SRC = ft_isdigit.c ft_isascii.c ft_isalpha.c ft_isalnum.c ft_isprint.c \
ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_tolower.c \
ft_toupper.c ft_strcmp.c ft_strchr.c  ft_strrchr.c \
ft_strnstr.c ft_memset.c ft_bzero.c ft_memchr.c ft_memcpy.c \
ft_memmove.c  ft_memcmp.c ft_atoi.c ft_calloc.c ft_strdup.c ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c \
ft_putendl_fd.c ft_substr.c ft_strjoin.c ft_striteri.c ft_strmapi.c ft_itoa.c

OBJ = $(SRC:.c=.o)       

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
