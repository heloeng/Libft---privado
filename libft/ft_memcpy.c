
#include "libft.h"
/*
void *ft_memcpy(void *dest, const void *src, size_t n)

{
    // parâmetro
    // recebimento
    // retorno
    size_t i;

    i = 0;

    while (i < n)
    {
        ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
        i++;
    }
    return (dest);
}
*/

void *ft_memcpy(void *dest, const void *src, size_t n)

{
    // converte os ponteiros para unsigned char
    unsigned char *d = (unsigned char *)dest;
    unsigned char *s = (unsigned char *)src;

    while (n > 0)
    {
        *d++ = *s++; // copia o byte avança os ponteiros
     n--;
    }
    return (dest);
}

/*
int main(void)
{

    char src[10] = "heloiza";
    char dest[10];
    ft_memcpy(dest, src, 3);
    printf(" resultado: %s/n", dest);
}*/