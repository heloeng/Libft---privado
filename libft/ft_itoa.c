/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helde-so <helde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 10:43:47 by helde-so          #+#    #+#             */
/*   Updated: 2024/11/02 18:41:18 by helde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// converter um número inteiro (int) em uma string (char *).
// retorna string
// parâmetro int 'n' --> será convertido em string

/*
123456 * 10
1234560

123456 /10
12345

123456 % 10
6
*/
char *ft_itoa(int n)
{
	int len;
	char *str;
	int count;
	// Determinar o Comprimento da String
	len = 0;
	count = 0;
	if (count < 0)
	{
		count = -count;
		len = 1;
	}

	if (count == 0)
	{
		len = 1;
	}

	while (count != 0)
	{
		count /= 10;
		len++;
	}
	// return (len);
	//  Iniciar a Função e Alocar Memória: Defina a função e aloque a memória para a string.
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
	{
		return (NULL);
	}
	// Adicionar o Caractere Nulo: Garanta que a string termine com \0.
	str[len] = '\0'; // insere no index 1 ser for zero

	// Tratar o Caso do Zero: Se o número é zero, insira '0' e retorne a string.
	if (n == 0)
	{
		str[0] = '0'; // insere no index 0;
		return (str);
	}
	// Converter o Número para String: Extraia e converta cada dígito.
	while (len > 0)
	{
		str[len - 1] = (n%10) + 48;
		n = n/10;
		len--;
	}
	
	if(n < 0)
	{
		str[0] = '-';
	}
	

	// Adicionar o Sinal Negativo: Coloque o sinal '-' se o número for negativo.
	// Retornar a String: Finalize a função retornando a string resultante.
	return (str);
}

#include <stdio.h>
#include <stdlib.h>

// Protótipo da função ft_itoa
char *ft_itoa(int n);

int main(void)
{
    // Teste com vários números, incluindo casos extremos
    int values[] = {0, 1, -1, 42, -42, 123456, -123456, 2147483647, -2147483648};
    char *result;

    printf("Testando ft_itoa:\n\n");

    // Use size_t para garantir a compatibilidade de tipos
    for (size_t i = 0; i < sizeof(values) / sizeof(values[0]); i++)
    {
        result = ft_itoa(values[i]);
        if (result)
        {
            printf("ft_itoa(%d) -> \"%s\"\n", values[i], result);
            free(result); // Liberar memória alocada
        }
        else
        {
            printf("Erro: Memória insuficiente para ft_itoa(%d)\n", values[i]);
        }
    }

    return 0;
}
