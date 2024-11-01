/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helde-so <helde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:57:02 by helde-so          #+#    #+#             */
/*   Updated: 2024/11/01 12:00:54 by helde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int i;

	if(!s || !f)
	{
		return;
	}
	
	i = 0;
	while(s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
	
}

/*
int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}

int main() {
    char str[] = "Exemplo de Teste";
    
    printf("Original: %s\n", str);
    
    ft_striteri(str, ft_isalpha);
    
    printf("Modificado: %s\n", str); 
    
    return 0;
}

*/