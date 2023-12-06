/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozahdi <ozahdi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:55:23 by ozahdi            #+#    #+#             */
/*   Updated: 2023/12/05 18:50:25 by ozahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_format(char specifier, va_list ap, int *len)
{
	if (specifier == 'c')
		ft_putchar(va_arg(ap, int), len);
	else if (specifier == 's')
		ft_putstr(va_arg(ap, char *), len);
	else if (specifier == 'p')
		ft_putadr(va_arg(ap, void *), len);
	else if (specifier == 'i' || specifier == 'd')
		ft_putnbr(va_arg(ap, int), len);
	else if (specifier == 'u')
		ft_putnbr_uns(va_arg(ap, unsigned int), len);
	else if (specifier == 'x' || specifier == 'X')
		ft_putnbr_hex(va_arg(ap, unsigned int), specifier, len);
	else if (specifier == '%')
		ft_putchar('%', len);
	else
		ft_putchar(specifier, len);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		len;
	va_list	ap;

	i = 0;
	len = 0;
	if (write(1, "", 0) < 0)
		return (-1);
	va_start(ap, format);
	while (format && format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			i++;
			print_format(format[i], ap, &len);
		}
		else if (format[i] != '%')
			ft_putchar(format[i], &len);
		i++;
	}
	va_end(ap);
	return (len);
}
