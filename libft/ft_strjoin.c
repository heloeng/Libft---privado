/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helde-so <helde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 14:33:57 by helde-so          #+#    #+#             */
/*   Updated: 2024/10/31 16:51:55 by helde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//retorno
//s1: A primeira string, que servirá como prefixo da nova string.
//s2: A segunda string, que será anexada como sufixo à nova string.
//Retorno
    //A função retorna um ponteiro para uma nova string, que é o resultado da junção de s1 e s2.
    //Em caso de falha na alocação de memória (usando malloc), a função retorna NULL.
#include "libft.h"
char *ft_strjoin(char const *s1, char const *s2)
{
	size_t str_len_1;
	size_t str_len_2;
	char  total_str1_str2;
	char *new_str;

	//verificar se as entradas são válidas(null)
	if (!s1 || !s2)
	{
		return NULL;
		
	}
  //calcular o tamanho da cada string
  str_len_1 = ft_strlen(s1);
  str_len_2 = ft_strlen(s2);

  //somar os bytes das duas strings 
  //será necessário para alocar espaço para nova string
  total_str1_str2 = str_len_1 + str_len_2;
   
  	//alocar mémória para nova string e (falha - verificar se deu certo)
	new_str = (char *)malloc((total_str1_str2 + 1)* sizeof(char));
	if(!new_str)
	{
		return (NULL);
	}
	
	//copiar s1 para nova string
	ft_strlcpy(new_str, s1, total_str1_str2 + 1);
	//concaternar s2 a  nova string
	ft_strlcat(new_str, s2, total_str1_str2 + 1);
	//adicionar terminator nulo ao resultado
	//retorne nova string que retorna um ponteiro s1, seguido de s2
	return new_str;
}

/*
#include<stdio.h>
int main(void)
{
	char *s1 = "heloiza";
	char *s2 = "mendes";
    char *result; 
	
	result = ft_strjoin(s1, s2);
    if (result) // Verifica se a alocação foi bem-sucedida
    {
        printf("Concatenação: %s\n", result); 
        free(result); // Libera a memória alocada
    }
    else
    {
        printf("Falha na alocação de memória.\n");
    }

    return 0;
}
*/
