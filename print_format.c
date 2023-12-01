/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_format.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozahdi <ozahdi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:53:49 by ozahdi            #+#    #+#             */
/*   Updated: 2023/12/01 14:54:10 by ozahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int print_format(char specifier, va_list ap)
{
    if (specifier == 'c')
        ft_putchar(va_arg(ap, int));
    else if (specifier == 's')
        ft_putstr(va_arg(ap, char *));
    else if (specifier == 'p')
        ft_putnbr_adr(va_arg(ap, int));
    else if (specifier == 'i')
        ft_putnbr(va_arg(ap, int));
    else if (specifier == 'd')
        ft_putnbr(va_arg(ap, int));
    else if (specifier == 'u')
        ft_putnbr_uns(va_arg(ap, int));
    else if (specifier == 'x')
        ft_putnbr_hex(va_arg(ap, int), 'x');
    else if (specifier == 'X')
        ft_putnbr_hex(va_arg(ap, int), 'X');
    else if (specifier == '%')
        ft_putchar('%');
    return 0;
    
}
