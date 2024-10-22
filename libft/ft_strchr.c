/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helde-so <helde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 13:13:17 by helde-so          #+#    #+#             */
/*   Updated: 2024/10/22 17:14:50 by helde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


//Procura a primeira ocorrência de um caracter em uma string.

char *ft_strchr(const char *s, int c)
{

unsigned char ch = (unsigned char)c;

    while (*s != '\0')
    {
        if (*s == ch)
        {
            return ((char *)s);
        }
         s++;
    }
   

    if (ch == '\0')
    {
        return ((char *)s);
    }
    return (0);

}
/*
    int main(void)
    {

        const char result[10] = "heloiza";

        printf("%s\n", ft_strchr(result, 'i'));
        return (0);
    }

*/