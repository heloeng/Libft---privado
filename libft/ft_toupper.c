/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helde-so <helde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 11:32:36 by helde-so          #+#    #+#             */
/*   Updated: 2024/10/18 14:17:44 by helde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//transforma letra minuscula para maiuscula
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - 32);
	}
	return (c);
}
/*
#include <stdio.h>
int main(void)
{
    char c;
    char result;
    c = 'a';
    result = ft_toupper(c);
    printf("%d/n", result);
    return (0);
}
*/
