/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helde-so <helde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:28:36 by helde-so          #+#    #+#             */
/*   Updated: 2024/10/30 10:28:17 by helde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{

	char *ptr;
	ptr = s;
	
	while (*ptr != '\0')
	{
		write(fd, ptr, 1);
		ptr++;
	}
}


/*
void ft_putstr_fd(char *s, int fd)
{
	int i;
	i = 0;
	while (s[i])
	{

		write(fd, &s[i], 1);
		i++;
	}
}
*/

/*
int main(void)
{
	//imprime tudo na mesma linha a duas saidas
	ft_putstr_fd("helo", 1); 
	ft_putstr_fd("iza", 1);
	return (0);
}
*/

