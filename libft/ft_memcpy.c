/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helde-so <helde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 09:08:53 by helde-so          #+#    #+#             */
/*   Updated: 2024/10/30 10:42:06 by helde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;

    if (d == (void *) 0 && src == (void *) 0)
    return (dest);

    
	while (n > 0)
	{
		*d++ = *s++;
		n--;
	}
	return (dest);
}
/*
void *ft_memcpy(void *dest, const void *src, size_t n)

{
    // parâmetro
    // recebimento
    // retorno
    size_t i;

    i = 0;

    while (i < n)
    {
        ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
        i++;
    }
    //return (dest);
   
}

*/

/*
int main(void)
{

    char src[10] = "heloiza";
    char dest[1];
    ft_memcpy(dest, src, 3);
    printf(" resultado: %s/n", dest);
}
*/
