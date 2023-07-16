/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtigunit <mtigunit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 15:28:46 by mtigunit          #+#    #+#             */
/*   Updated: 2022/11/07 21:55:02 by mtigunit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	check_format(char f, va_list args)
{
	int	len;

	len = 0;
	if (f == 'c')
		len += ft_putchar_len(va_arg(args, int));
	else if (f == 's')
		len += ft_putstr_len(va_arg(args, char *));
	else if (f == 'd' || f == 'i')
		len += ft_putnbr_len(va_arg(args, int));
	else if (f == 'u')
		len += ft_putunsigned_len(va_arg(args, unsigned int));
	else if (f == 'x' || f == 'X')
		len += ft_puthex_len(va_arg(args, unsigned int), f);
	else if (f == 'p')
		len += ft_putptr_len(va_arg(args, void *));
	else if (f == '%')
		len += ft_putchar_len('%');
	return (len);
}

static int	isformat(char f)
{
	return (f == 'd' || f == 'i' || f == 'u' || f == 'p' || f == 'x'
		|| f == 'X' || f == 's' || f == 'c' || f == '%');
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	p_param;

	i = 0;
	va_start(p_param, str);
	while (*str)
	{
		if (*str == '%' && isformat(*(str + 1)))
		{
			i += check_format(*(str + 1), p_param);
			str += 2;
		}
		else if (*str == '%')
			str++;
		else
		{
			i += ft_putchar_len(*str);
			str++;
		}
	}
	va_end(p_param);
	return (i);
}
