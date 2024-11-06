/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helde-so <helde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:26:07 by helde-so          #+#    #+#             */
/*   Updated: 2024/11/06 17:41:21 by helde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
1. **Contar as substrings**: Contar quantas substrings haverá no array final. Isso depende do número de vezes que o caractere `c` aparece em `s`.
2. **Alocar memória para o array de strings**: Alocar memória suficiente para armazenar todas as substrings, incluindo o ponteiro `NULL` final.
3. **Extrair as substrings**: Percorrer `s` para copiar cada substring entre delimitadores `c` para o array de strings.
4. **Adicionar o ponteiro NULL final**: Após copiar todas as substrings, adicionar `NULL` ao final do array para marcar seu término.
5. **Tratar falhas de alocação**: Se qualquer alocação falhar, liberar toda a memória alocada até o momento e retornar `NULL`.
*/
// s (char const *): A string que será dividida em substrings.
// c (char): O caractere usado como delimitador para a divisão da string.

// contar a substring separada por "c"

#include "libft.h"
static int count_substring(char const *s, char c)
{
	int count;
	int i;

	i = 0;
	count = 0;

	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
		{
			count++;
			while(s[i] != c && s[i])
			i++;
		}
	}
	return (count);
}

// copiar uma palavra da string s até o próximo delimitador

static char *ft_copy_string(char const *s, char c)
{
	int i;
	char *ptr;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	ptr = malloc((i + 1) * sizeof(char));
	if (!(ptr))
		return (NULL);
	ft_strlcpy(ptr, s, i + 1);
	return (ptr);
}

// liberar memoria
static void ft_free_memory(char **tab)
{
	char	**pos;

	if (tab == NULL)
		return ;
	pos = tab;
	while (*pos)
		free(*(pos++));
	free(tab);
}

char **ft_split(char const *s, char c)
{
	int i;
	int strs_len;
	char **ptr;

	strs_len = count_substring(s, c);
	ptr = ft_calloc(sizeof(char *), (strs_len + 1));
	if (!(ptr))
		return (NULL);

	i = -1;
	while (++i < strs_len)
	{

		while (*s == c)
			s++;
		ptr[i] = ft_copy_string(s, c);
		if (!(ptr[i]))
		{
			ft_free_memory(ptr);
			return (NULL);
		}
		s += ft_strlen(ptr[i]);
	}

ptr[i] = 0;
return (ptr);
}
