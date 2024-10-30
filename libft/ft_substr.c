/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helde-so <helde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 11:45:55 by helde-so          #+#    #+#             */
/*   Updated: 2024/10/30 16:52:01 by helde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//cria uma substring a partir de uma string dada, 
//começando em um índice especificado 
//e com um comprimento máximo também especificado. 

/*
- String `s` = `"Exemplo de texto"`
- Índice inicial `start` = `8` (a função deve começar a extrair a substring a partir do índice 8 de `s`)
- Comprimento `len` = `5` (a função deve copiar  até 5 caracteres a partir do índice `start`)
*/
#include "libft.h"
char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t i;//pecorre s
	size_t j;// preencher substr
	
	char *substr;//ponteiro  para o bloco de memória /onde a substring será apontada
	size_t str_len;
	
	str_len = (size_t)ft_strlen(s);
	
	if(start > str_len)
	{
		return (ft_strdup(&s[str_len]));
	}
	if(len > (str_len - start))
	{
		len = str_len - start;
	}
	

	substr = (char *)malloc(len +1);
	if(!substr)
	return (NULL);
	
	
	i = start;
	j = 0;
	while (i < str_len && j < len )
	substr[j++] = s[i++];
	substr[j] = '\0';
	return (substr);
 
	
	//calcular tamanho da string
	//alocar memoria para substring(retorna null se falhar)
	//copiar caracter 
	//retornar a substring
}