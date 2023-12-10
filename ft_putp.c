/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 21:05:50 by ael-mejd          #+#    #+#             */
/*   Updated: 2023/12/07 21:06:12 by ael-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putxu(unsigned long n)
{
	char	*s;
	int		count;

	count = 0;
	s = "0123456789abcdef";
	if (n <= 15)
	{
		ft_putchar(s[n]);
		return (++count);
	}
	count += ft_putxu(n / 16);
	ft_putchar(s[n % 16]);
	return (++count);
}

int	ft_putp(unsigned long n)
{
	int	count;

	count = 0;
	write(1, "0x", 2);
	count = 2;
	count += ft_putxu(n);
	return (count);
}
