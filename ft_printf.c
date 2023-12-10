/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 18:30:43 by ael-mejd          #+#    #+#             */
/*   Updated: 2023/12/09 19:58:25 by ael-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print(char specifier, va_list args)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count += ft_putchar(va_arg(args, int));
	else if (specifier == 's')
		count += ft_putstr(va_arg(args, char *));
	else if (specifier == 'p')
		count += ft_putp(va_arg(args, unsigned long));
	else if (specifier == 'd' || specifier == 'i')
		count += ft_putnbr(va_arg(args, int));
	else if (specifier == 'u')
		count += ft_putu(va_arg(args, unsigned int));
	else if (specifier == 'x')
		count += ft_putx(va_arg(args, unsigned int));
	else if (specifier == 'X')
		count += ft_puthex(va_arg(args, unsigned int));
	else
		count += write(1, &specifier, 1);
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
			count += print(str[++i], args);
		else
			count += write(1, &str[i], 1);
		i++;
	}
	va_end(args);
	return (count);
}
