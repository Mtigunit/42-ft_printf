/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned_len.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtigunit <mtigunit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 04:07:08 by mtigunit          #+#    #+#             */
/*   Updated: 2022/11/06 14:44:51 by mtigunit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsigned_len(unsigned int nb)
{
	int	i;

	i = 0;
	if (nb > 9)
	{
		i += ft_putunsigned_len(nb / 10);
		i += ft_putunsigned_len(nb % 10);
	}
	else
		i += ft_putchar_len(nb + 48);
	return (i);
}
