/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_len.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtigunit <mtigunit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 19:49:09 by mtigunit          #+#    #+#             */
/*   Updated: 2022/11/06 14:40:35 by mtigunit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	put_ptr(unsigned long p)
{
	int	i;

	i = 0;
	if (p >= 16)
	{
		i += put_ptr(p / 16);
		p %= 16;
	}
	i += ft_putchar_len("0123456789abcdef"[p % 16]);
	return (i);
}

int	ft_putptr_len(void *ptr)
{
	int	i;

	i = 0;
	i += ft_putstr_len("0x");
	i += put_ptr((unsigned long)ptr);
	return (i);
}
