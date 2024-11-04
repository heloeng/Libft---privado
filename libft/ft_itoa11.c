#include "libft.h"

char *ft_itoa(int n)
{
	int len;
	char *str;
	unsigned int num;
	// Determinar o Comprimento da String
	len = 0;
	num = n;
	if (n == 0)
	{
		//num = -num;
		len = 1;
	}

	if (n < 0)
	{
		num = -num;
		len++;
	}
	

	while (num != 0)
	{
		num /= 10;
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

if (n < 0)
{
	n = -n;
	str[0] = '-';
}

// Converter o Número para String: Extraia e converta cada dígito.
while (n != 0)
{
	str[--len] = (n % 10) + 48;
	n = n / 10;
	//len--;
}

	// if (n < 0)
	// {
	// 	str[0] = '-';
	// }

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

