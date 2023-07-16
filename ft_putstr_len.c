/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_len.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtigunit <mtigunit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 18:21:51 by mtigunit          #+#    #+#             */
/*   Updated: 2022/11/06 14:15:03 by mtigunit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_len(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (ft_putstr_len("(null)"));
	while (*s)
		i += ft_putchar_len(*(s++));
	return (i);
}
