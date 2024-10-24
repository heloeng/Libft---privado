
#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    // converte os ponteiros para unsigned char
    unsigned char *d = (unsigned char *)dest;
    unsigned char *s = (unsigned char *)src;
    // variavel de destino antes da origem(src)
    // Aqui, dest está em um endereço menor do que src.
    // Isso significa que as áreas de memória não
    // se sobrepõem ou que dest começa antes de src.
    // não havera sobreposição copia byte a byte
    if (src > dest)
    {
        return (ft_memcpy(dest, src, n));
    }
    else
    {
        // dest depois de src(origem) copia de traz para frente
        // Se dest está em um endereço maior do que src,
        // há a possibilidade de sobrescrever os dados se copiarmos da esquerda para a direita.
        // Copia de trás para frente:
        // Para evitar esse problema, a função começa a copiar do final para o início (de direita para esquerda). Isso garante que os dados
        // da origem ainda não tenham sido sobrescritos durante o processo de cópia.
        while (n--)
        {
            *d-- = *s--;
        }
        // retorna o ponteiro para onde os dados foram copiados
        return (dest);
    }
}

int main(void)
{

    char src[5] = "helo";
    char dest[6] = "AA";
    ft_memmove(dest, src, 3);
    printf(" resultado: %s/n", dest);
}