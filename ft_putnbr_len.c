/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_len.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtigunit <mtigunit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 18:18:15 by mtigunit          #+#    #+#             */
/*   Updated: 2022/11/06 14:44:36 by mtigunit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_len(int n)
{
	unsigned int	nb;
	int				i;

	i = 0;
	if (n < 0)
	{
		i += ft_putchar_len('-');
		nb = -n;
	}
	else
		nb = n;
	if (nb > 9)
	{
		i += ft_putnbr_len(nb / 10);
		nb = nb % 10;
	}
	i += ft_putchar_len(nb + 48);
	return (i);
}
