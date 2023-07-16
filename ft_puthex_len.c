/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_len.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtigunit <mtigunit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 19:47:55 by mtigunit          #+#    #+#             */
/*   Updated: 2022/11/06 14:44:11 by mtigunit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_len(unsigned int nb, const char format)
{
	int	i;

	i = 0;
	if (nb >= 16)
	{
		i += ft_puthex_len(nb / 16, format);
		nb %= 16;
	}
	if (format == 'x')
		i += ft_putchar_len("0123456789abcdef"[nb % 16]);
	else if (format == 'X')
		i += ft_putchar_len("0123456789ABCDEF"[nb % 16]);
	return (i);
}
