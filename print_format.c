/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_format.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozahdi <ozahdi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:53:49 by ozahdi            #+#    #+#             */
/*   Updated: 2023/12/01 15:40:26 by ozahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int print_format(char specifier, va_list ap)
{
    int len;

    len = 0;
    if (specifier == 'c')
        len += ft_putchar(va_arg(ap, int));
    else if (specifier == 's')
        len += ft_putstr(va_arg(ap, char *));
    else if (specifier == 'p')
        len += ft_putnbr_adr(va_arg(ap, int));
    else if (specifier == 'i')
        len += ft_putnbr(va_arg(ap, int));
    else if (specifier == 'd')
        len += ft_putnbr(va_arg(ap, int));
    else if (specifier == 'u')
        len += ft_putnbr_uns(va_arg(ap, int));
    else if (specifier == 'x')
        len += ft_putnbr_hex(va_arg(ap, int), 'x');
    else if (specifier == 'X')
        len += ft_putnbr_hex(va_arg(ap, int), 'X');
    else if (specifier == '%')
        len += ft_putchar('%');
    return (len);
    
}
