/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   full_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozahdi <ozahdi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 19:03:30 by ozahdi            #+#    #+#             */
/*   Updated: 2023/11/29 21:06:31 by ozahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void ft_putchar(char c, int *len)
{
    write(1, &c, 1);
    *len = *len + 1;
}
static void ft_putstr(char *str)
{
    
}
static int print_format(char specifier, va_list ap, int *len)
{
    
}
int ft_printf(const char *format, ...)
{
    int     i;
    int     counter;
    va_list ap;
    
    i = 0;
    counter = 0;
    va_start(ap, format);

    while (*format)
    {
        if(*format == '%')
            counter += print_format(++format, ap, &counter);
		else
		counter += ft_putchar(format, counter);
        
    }
    
}

// int	ft_printf(const char *format, ...)
// {
// 	int			i;
// 	int			len;
// 	va_list		ap;

// 	i = 0;
// 	len = 0;
// 	if (write(1, "", 0) < 0)
// 		return (-1);
// 	va_start(ap, format);
// 	while (format && format[i])
// 	{
// 		if (format[i] != '%')
// 			ft_putchar(format[i], &len);
// 		else if (format[i] == '%' && format[i + 1])
// 		{
// 			putformat(format[i + 1], ap, &len);
// 			i++;
// 		}
// 		i++;
// 	}
// 	va_end(ap);
// 	return (len);
// }
