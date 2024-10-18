/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helde-so <helde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 13:39:09 by helde-so          #+#    #+#             */
/*   Updated: 2024/10/18 14:21:29 by helde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Verifica se um caractere é uma letra do alfabeto (a-z ou A-Z)
int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}
/*
#include <stdio.h>

int main(void)
{
    char c;
    int result;

    c = '3';
    result = ft_isalpha(c);

    printf("%d\n", result);
    return (0);
}

*/
