/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putu.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 20:38:18 by ael-mejd          #+#    #+#             */
/*   Updated: 2023/12/07 20:38:34 by ael-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putu(unsigned int n)
{
	int	count;

	count = 0;
	if (n <= 9)
	{
		count += ft_putchar((n % 10) + '0');
		return (count);
	}
	else
	{
		count += ft_putnbr(n / 10);
		return (count + ft_putnbr(n % 10));
	}
}
