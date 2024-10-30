/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helde-so <helde-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 09:44:21 by helde-so          #+#    #+#             */
/*   Updated: 2024/10/30 10:37:26 by helde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void ft_putnbr_fd(int n, int fd)
{
	int last_digit;

	if (fd < 0)
		return;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return;
	}
	else if (n < 0) // insere sinal negativo ,caso  seja um número negativo
	{
		write(fd, "-", 1);
		n = -n; // transforma em positivo para extração do digito  (n % 10), já que o módulo e a divisão por 10 funcionam naturalmente com números positivos.
	    ft_putnbr_fd(n, fd);
	}
	else
	{
		if (n > 9)
		{
			ft_putnbr_fd(n / 10, fd); // Chamada recursiva para imprimir todos os dígitos menos o último
			ft_putnbr_fd(n % 10, fd);
		}
		else
		{
			last_digit = n + 48;	   // Extrai o último dígito e converte o último dígito de n para seu valor de caractere ASCII somando '0' (ou 48).
			write(fd, &last_digit, 1); // Escreve o caractere no descritor de arquivo
		}
	}
}
