/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helde-so <helde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:57:02 by helde-so          #+#    #+#             */
/*   Updated: 2024/10/31 20:30:22 by helde-so         ###   ########.fr       */
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
void toggle_case(unsigned int index, char *c) {
    if (index % 2 == 0) {
        *c = toupper(*c); // Converte para maiúscula se o índice for par
    } else {
        *c = tolower(*c); // Converte para minúscula se o índice for ímpar
    }
}

int main() {
    char str[] = "Exemplo de Teste";
    
    printf("Original: %s\n", str);
    
    ft_striteri(str, toggle_case);
    
    printf("Modificado: %s\n", str); 
    
    return 0;
}
*/