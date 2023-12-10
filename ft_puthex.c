/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 20:58:40 by ael-mejd          #+#    #+#             */
/*   Updated: 2023/12/07 20:58:58 by ael-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int n)
{
	char	*s;
	int		count;

	count = 0;
	s = "0123456789ABCDEF";
	if (n <= 15)
	{
		ft_putchar(s[n]);
		return (++count);
	}
	count += ft_puthex(n / 16);
	ft_putchar(s[n % 16]);
	return (++count);
}
/*int main()
{
	unsigned int a= 0x1A3F;
	printf("length : %d", ft_puthex(a));
	return (0);
}*/