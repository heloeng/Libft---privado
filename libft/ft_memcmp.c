/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helde-so <helde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 09:46:45 by helde-so          #+#    #+#             */
/*   Updated: 2024/10/24 10:30:44 by helde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)

{
	
	unsigned char *ptr_1;
	unsigned char *ptr_2;
	size_t			i;
	
	
	ptr_1 = (unsigned char *)s1;
	ptr_2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (ptr_1[i] != ptr_2[i])

			return (ptr_1[i] - ptr_2[i]);
		i++;
	}
	return (0);
}
/*
int main(){
  char fonteA[12] = "Computacao";
  char fonteB[12] = "Computador";
  printf("Bloco de memória A: %s\n", fonteA);
  printf("Bloco de memória B: %s\n", fonteB);
  printf("Valor da primeira comparação: %d\n\n", memcmp(fonteA, fonteB, sizeof(fonteA)));

  char fonteC[12] = "BCC";
  char fonteD[12] = "BCC";
  printf("String C: %s\n", fonteC);
  printf("String D: %s\n", fonteD);
  printf("Valor da segunda comparação: %d\n\n", memcmp(fonteC, fonteD, sizeof(fonteC)));
  
  return 0;
}	
*/