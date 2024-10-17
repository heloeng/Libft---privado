/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helde-so <helde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 14:42:28 by helde-so          #+#    #+#             */
/*   Updated: 2024/10/17 16:17:34 by helde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{

    size_t i;

    i = 0;
    if (size != 0)
    {
        while (src[i] != '\0' && i < (size - 1))
        {
            dst[i] = src[i];
            i++;
        }
        dst[i] = '\0';
    }

    return (ft_strlen(src));
}

/*

int main(void)
{
    char dest[20];  
    const char *src = "Heloiza";
    size_t size = 5;  

    size_t result = ft_strlcpy(dest, src, size);

    // Imprimindo os resultados
    printf("Fonte (src): %s\n", src);
    printf("Destino (dest) após strlcpy: %s\n", dest);
    printf("Comprimento total de src: %zu\n", result);

    // Comparação com a função padrão strlcpy para verificar o comportamento
    char std_dest[20];
    size_t std_result = strlcpy(std_dest, src, size);
    printf("\nResultado da função padrão strlcpy:\n");
    printf("Destino (std_dest) após strlcpy: %s\n", std_dest);
    printf("Comprimento total de src pela strlcpy padrão: %zu\n", std_result);

    return 0;
}
*/