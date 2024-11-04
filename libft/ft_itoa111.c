#include "libft.h"
#include <stdlib.h>

static int ft_num_len(int n)
{
    int len = 0;
    unsigned int num;

    if (n == 0)
        return 1;

    if (n < 0)
    {
        len = 1; 
        num = -n;
    }
    else
    {
        num = n;
    }

    while (num != 0)
    {
        num /= 10;
        len++;
    }

    return len;
}

char *ft_itoa(int n)
{
    int len = ft_num_len(n);
    char *str;
    unsigned int num;

    str = (char *)malloc((len + 1) * sizeof(char));
    if (!str)
        return (NULL);

    str[len] = '\0'; 

    if (n == 0)
    {
        str[0] = '0';
        return str;
    }

   // if (n == -2147483648)
    //{
     //   str[0] = '-';
     //   str[1] = '2';
    //    n = 147483648; 
  //  }
    if (n < 0)
    {
        str[0] = '-';
        num = -n;
    }
    else
    {
        num = n;
    }

    while (num != 0)
    {
        str[--len] = (num % 10) + '0';
        num /= 10;
    }

    return str;
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