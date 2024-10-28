/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helde-so <helde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:15:50 by helde-so          #+#    #+#             */
/*   Updated: 2024/10/25 18:14:44 by helde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Preenche uma área de memória com um valor específico.
/*
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n > 0)
	{
		ptr[n - 1] = c;
		n--;
	}
	return (s);
}*/

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	ch;
	unsigned char	*ptr;
	size_t			i;

	ch = (unsigned char)c;
	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = ch;
		i++;
	}
	return (s);
}
/*int main(){
  char fonte[3];
  printf("Bloco de memória fonte: %s\n\n", fonte);
  int c = 'H';
  size_t n = 3;
  // Utilizamos sizeof() para contar exatamente o número de bytes do
  // bloco de memória fonte.
  memset(fonte, c, n);
  printf("Bloco de memória de fonte após ser alterado:\n");
  printf("%s\n", fonte);
  
  return 0;
}*/
