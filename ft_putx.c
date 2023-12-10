/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putx.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 20:41:15 by ael-mejd          #+#    #+#             */
/*   Updated: 2023/12/07 20:42:26 by ael-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putx(unsigned int n)
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
	count += ft_putx(n / 16);
	ft_putchar(s[n % 16]);
	return (++count);
}
