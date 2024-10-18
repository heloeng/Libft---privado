/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helde-so <helde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 16:28:38 by helde-so          #+#    #+#             */
/*   Updated: 2024/10/18 14:19:40 by helde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Copia uma string para um buffer limitando o número de caracteres copiados
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}
/*
size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t i;
    i = 0;
    if (size != '\0')
    {
        while (*src < (size - 1) || *src != '\0')
            *dst++ = src++;
        i++;
    }
    *dst = '\0';
}
*/
/*
#include<stdio.h>
int main() {
    size_t result;
    char src[] = "Heloiza";  
    char dst[5];             

   
  result = ft_strlcpy(dst, src, sizeof(dst));

   
    printf("Origem: %s\n", src);   
    printf("Destino: %s\n", dst);  
    printf("Comprimento total: %zu\n", result);  // Esperado: 7

    return 0;
}
*/
