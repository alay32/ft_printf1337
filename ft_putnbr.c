/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 11:36:00 by ael-mejd          #+#    #+#             */
/*   Updated: 2023/12/07 11:37:07 by ael-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int	count;

	count = 0;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		count += write(1, "-", 1);
		return (count + ft_putnbr(-n));
	}
	else if (n <= 9)
	{
		ft_putchar((n % 10) + '0');
		count++;
		return (count);
	}
	else
	{
		count += ft_putnbr(n / 10);
		return (count + ft_putnbr(n % 10));
	}
}
