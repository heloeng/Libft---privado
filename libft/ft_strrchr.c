/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helde-so <helde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 10:54:58 by helde-so          #+#    #+#             */
/*   Updated: 2024/10/21 15:02:30 by helde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Procura a última ocorrência de um caracter em uma string.
char    *ft_strrchr(const char *s, int c)
{
    unsigned char   ch = (unsigned char)c;
    const char  *last_c =    NULL;
    
    while (*s != '\0')
    {
        if (*s == ch)
        {
            last_c = s;
        }
         s++;
    }
   

    if (ch == '\0')
    {
        return ((char *)s);
    }
   return ((char *)last_c);

}

/*
    int main(void)
    {

        const char result[10] = "heloizaa";

        printf("%s\n", ft_strrchr(result, 'a'));
        return (0);
    }
*/