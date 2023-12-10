/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftprintf.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 17:44:31 by ael-mejd          #+#    #+#             */
/*   Updated: 2023/12/09 17:44:40 by ael-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_putnbr(int n);
int	ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_puthex(unsigned int n);
int	ft_putp(unsigned long n);
int	ft_putu(unsigned int n);
int	ft_putx(unsigned int n);
int	ft_strlen(char *s);
int	ft_printf(const char *str, ...);
#endif
