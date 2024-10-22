/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helde-so <helde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 13:46:01 by helde-so          #+#    #+#             */
/*   Updated: 2024/10/22 10:09:06 by helde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//big - onde procurar /
//little: substring a procurar / 
//size - limite máximo de caracteres para percorrer
// little_len; variável que irá receber o tamanho da string

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	little_len;

	if (*little == '\0')
		return ((char *)big);
	i = 0;
	little_len = ft_strlen(little);
	while (i + little_len <= len && big[i])
	{
		if (ft_strncmp(&big[i], little, little_len) == 0)
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
/*
	int main(void)
{
    const char *texto = "Este é um teste de string";
    const char *procura = "teste";
    size_t len = 20;

    // Chama a função strnstr
    char *resultado = strnstr(texto, procura, len);

    // Verifica o resultado
    if (resultado != NULL) {
        printf("Substring encontrada: %s\n", resultado);
    } else {
        printf("Substring não encontrada nos primeiros %zu caracteres.\n", len);
    }

    return 0;
}
	*/
