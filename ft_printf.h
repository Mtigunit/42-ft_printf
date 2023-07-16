/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtigunit <mtigunit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 15:44:18 by mtigunit          #+#    #+#             */
/*   Updated: 2022/11/06 14:42:49 by mtigunit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int	ft_printf(const char *str, ...);
int	ft_putstr_len(char *s);
int	ft_putnbr_len(int nb);
int	ft_putchar_len(char c);
int	ft_putunsigned_len(unsigned int nb);
int	ft_puthex_len(unsigned int nb, const char format);
int	ft_putptr_len(void *ptr);

#endif
