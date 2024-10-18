/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helde-so <helde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 10:20:29 by helde-so          #+#    #+#             */
/*   Updated: 2024/10/18 14:17:22 by helde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//transforma letra maiscula para minúscula
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c + 32);
	}
	return (c);
}
/*
#include <stdio.h>
int main(void)
{
    char c;
    char result;
    c = 'A';
    result = tolower(c);
    printf("%d/n", result);
    return (0);
}
*/
