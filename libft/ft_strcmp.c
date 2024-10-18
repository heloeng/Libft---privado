/* ************************************************************************** */
/*                                                                            */
/*                              https://profile.intra.42.fr/                          :::      ::::::::   */
/*   ft__strcmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helde-so <helde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 14:06:50 by helde-so          #+#    #+#             */
/*   Updated: 2024/10/18 16:21:06 by helde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include "libft.h"
// Compara duas strings até um número máximo de caractere
int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    // s1 = s2 = retorna 0
    // s1  > s2 = retornar positivo
    ////s1  < s2 = retornar negativo
    size_t i;

    i = 0;
    //if (n == 0)
    //{
     //   return (0);
   // }
//laço - compara as strings
    while (i < n && (s1[i] != '\0') && (s2[i] != '\0'))
    {
        //se for diferente retorna a diferença entre eles
        if (s1[i] != s2[i])
        {
            return ((unsigned char)s1[i] - (unsigned char)s2[i]);
        }
        //senão avança para o próximo caracter
      i++;
    }

//condição - verificar se uma string terminou antes da outra
//if (i < n && (s1[i] == '\0' || s2[i] == '\0'))
if(i < n)
{
     return ((unsigned char)s1[1] - (unsigned char)s2[2]);
}
// nenhuma diferença for encontrada:
//Se todas as comparações forem iguais, e se as strings terminarem ao mesmo tempo ou atingirem o limite de n caracteres, a função retorna 0,
//indicando que as duas strings são iguais até o ponto n.
return (0);
}
*/
/*
int main()
{
    const char *str1 = "casa";
    const char *str2 = "cato";
    size_t n = 3;

    // Chamando a sua função
    int result = ft_strncmp(str1, str2, n);

    // Comparando com a função padrão strncmp
    int original_result = strncmp(str1, str2, n);

    // Exibindo os resultados
    printf("Resultado da sua função: %d\n", result);
    printf("Resultado da função original: %d\n", original_result);

    // Verificando se os resultados coincidem
    if (result == original_result)
    {
        printf("Os resultados coincidem.\n");
    }
    else
    {
        printf("Os resultados NÃO coincidem.\n");
    }

    return 0;
}
*/
/*
#include "libft.h"
int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2 && n > 0)
    {
        s1++;
        s2++;
        n--;
    }
    if (n == 0)
        return (0);
    return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
*/


#include "libft.h"
int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;

    i = 0;
    while (i < n && s1[i] != '\0' && s1[i] == s2[i])
    {
        i++;
    }
    if (i == n)
        return (0);
    return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}