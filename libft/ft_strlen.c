/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helde-so <helde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 11:25:21 by helde-so          #+#    #+#             */
/*   Updated: 2024/10/21 15:52:19 by helde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Calcula o tamanho de uma string (o número de caracteres até o 
//caractere nulo '\0'
size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}
/*
#include<stdio.h>
int main(void)
{
    char *s;
    char result;
    
    s = "heloia";
    result = ft_strlen(s);
    printf("%d/n", result);
}

*/

/*
size_t ft_strlen(const char *s)
{

	i = 0;
	while (s[i])
		i++;
	return (i);
}
*/
