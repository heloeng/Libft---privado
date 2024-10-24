/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helde-so <helde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:45:49 by helde-so          #+#    #+#             */
/*   Updated: 2024/10/22 18:09:42 by helde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	ch;
	size_t			i;

	ch = (unsigned char)c;
	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ch == ptr[i])
		{
			return (ptr + i);
		}
		i++;
	}
	return (NULL);
}

int main(void)
{

	const char result[10] = "heloiza";
	char *ptr = (char *)ft_memchr(result, 'e', 2);
	printf("%s\n", ptr);

	return (0);
}

