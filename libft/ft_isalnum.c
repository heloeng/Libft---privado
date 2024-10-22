/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helde-so <helde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 09:55:10 by helde-so          #+#    #+#             */
/*   Updated: 2024/10/21 13:53:28 by helde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Verifica se um caracter é uma letra (a-z ou A-Z) 
int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
/*
#include <stdio.h>

int main(void)
{
	char c;
	int result;

	c = '%'; 
	result = ft_isalnum(c);
	printf("%d\n", result); 
	return (0);
}
*/
