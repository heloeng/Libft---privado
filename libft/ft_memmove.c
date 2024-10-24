/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helde-so <helde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 08:59:30 by helde-so          #+#    #+#             */
/*   Updated: 2024/10/24 14:33:22 by helde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *d = (unsigned char *)dest;
    unsigned char *s = (unsigned char *)src;
 
     if(d == s || n == 0)
     {
        return (dest);
     }
 
    if (src > dest)
    {
        return (ft_memcpy(dest, src, n));
    }
    else
    {      
        d += n-1;
        s += n-1;
        while (n--)
        {
            *d-- = *s--;
        }
        return (dest);
    }
}
/*
int main(void)
{

    char src[5] = "helo";
    char dest[6] = "AA";
    ft_memmove(dest, src, 3);
    printf(" resultado: %s/n", dest);
}
*/