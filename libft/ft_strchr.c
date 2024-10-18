/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helde-so <helde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 13:13:17 by helde-so          #+#    #+#             */
/*   Updated: 2024/10/18 20:28:42 by helde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include<string.h>
# include<stdio.h>
char *ft_strchr(const char *s, int c)
{

    while (*s != '\0')
    {
        if (*s == c)
        {
            return ((char *)s);
        }
    }
    s++;
}


int main(void)
{
    
    const char  result[10] = "heloiza";
    
   
    printf("%s\n", ft_strchr(result, 'i'));
    return (0);
}