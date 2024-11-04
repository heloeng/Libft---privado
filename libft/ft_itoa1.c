
#include "libft.h"
#include <stdlib.h>

char *ft_itoa(int n)
{
    int len;
    char *str;
    unsigned int num; // Usar unsigned int para lidar com o caso de n negativo

    // Determinar o Comprimento da String
    len = 0;
    if (n <= 0)  // Conta espaço para o sinal negativo ou para o zero
        len = 1;

    num = (n < 0) ? -n : n; // Se n for negativo, inicializa num com -n; caso contrário, com n
    while (num != 0) {
        num /= 10;
        len++;
    }

    // Alocar memória para a string e verificar
    str = (char *)malloc((len + 1) * sizeof(char));
    if (!str)
        return (NULL);

    // Adicionar o caractere nulo no final da string
    str[len] = '\0';

    // Tratar o caso de n == 0 diretamente
    if (n == 0) {
        str[0] = '0';
        return (str);
    }

    // Restaurar o valor de num para a conversão
    num = (n < 0) ? -n : n;

    // Converter o número para string, preenchendo de trás para frente
    while (num != 0) {
        str[--len] = (num % 10) + '0'; // Extrai o último dígito e converte para caractere
        num /= 10;
    }

    // Adicionar o sinal negativo se n for negativo
    if (n < 0)
        str[0] = '-';

    return (str);
}

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