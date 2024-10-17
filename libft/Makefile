# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: helde-so <helde-so@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/14 11:02:09 by helde-so          #+#    #+#              #
#    Updated: 2024/10/17 16:12:39 by helde-so         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



NAME = libft.a            
CC = gcc                 
CFLAGS = -Wall -Wextra -Werror  
SRC = ft_isdigit.c ft_isascii.c ft_isalpha.c ft_isalnum.c ft_isprint.c ft_strlen.c ft_strlcpy.c ft_strlcat.c
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
