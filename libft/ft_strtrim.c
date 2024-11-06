/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helde-so <helde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 10:42:00 by helde-so          #+#    #+#             */
/*   Updated: 2024/11/06 14:01:17 by helde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//s1 - string de entrada - "--heloiza--"
//set - caracter a ser removido
//start - 0
//end - comprimento da string + caracteres

#include "libft.h"
char *ft_strtrim(char const *s1, char const *set)
{
	char	*str; //nova string maloca
	int		start; //0
	int		end;
	int		str_len; //comprimento da nova string

	if (!s1 || !set)
		return (NULL);
		
	start = 0;
	end = ft_strlen(s1) - 1; //conta os caracteres  e subtrai -1 , pois o indice inicia no zero 
	
	//while start - verificar onde começa o indice válido
	//verifica na string de entrada s1 o indice está em set
	//se encontrar incrementa e no final e retorna o index onde o trecho válido da string dentro de s1
	//exemplo s1 = "--heloiza--", start = 2 aponta para a letra "h"
	//start = 2: Significa que o trecho válido começa na posição 2 (na letra "h").
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	
	//while end se o caracter s1[end](string de entrada) está em set(caracter a ser removido)
	//resultado vai decrementar end(que tem o valor  total de toda a string + caracter)
	//retornar o indice onde termina a string valida - decrementa ate encontar um caracter que não esta set
	while (end > start && ft_strchr(set, s1[end]))
		end--;
		
		//calcular o comprimento da nova string
	str_len = end - start + 1;
	//aloca memória
	str = malloc(str_len + 1);
	if (!str)
		return (NULL);
		//copia a substring
	ft_strlcpy(str, &s1[start], str_len + 1);
	return (str);
}