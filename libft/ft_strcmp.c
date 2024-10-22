/* ************************************************************************** */
/*                                                                            */
/*                              https://profile.intra.42.fr/                          :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helde-so <helde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 14:06:50 by helde-so          #+#    #+#             */
/*   Updated: 2024/10/22 09:51:54 by helde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// nenhuma diferença for encontrada:
//Se todas as comparações forem iguais, e se as strings terminarem ao mesmo tempo ou atingirem o limite de n caracteres, a função retorna 0,
//indicando que as duas strings são iguais até o ponto n.

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	
	i = 0;
	while (i < n && s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*
#include "libft.h"
int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2 && n > 0)
    {
        s1++;
        s2++;
        n--;
    }
    if (n == 0)
        return (0);
    return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
*/
