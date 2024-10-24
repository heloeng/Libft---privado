# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: helde-so <helde-so@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/14 11:02:09 by helde-so          #+#    #+#              #
#    Updated: 2024/10/24 18:52:45 by helde-so         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



NAME = libft.a            
CC = gcc                 
CFLAGS = -Wall -Wextra -Werror  
SRC = ft_isdigit.c ft_isascii.c ft_isalpha.c ft_isalnum.c ft_isprint.c ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_tolower.c ft_toupper.c ft_strcmp.c *ft_strchr.c  ft_strrchr.c  ft_strnstr.c ft_memset.c ft_bzero.c ft_memchr.c ft_memcpy.c  ft_memmove.c  ft_memcmp.c ft_atoi.c
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
