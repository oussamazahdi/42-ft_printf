/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozahdi <ozahdi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:48:37 by ozahdi            #+#    #+#             */
/*   Updated: 2023/12/01 18:54:07 by ozahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putnbr_hex(long int nb, int c)
{
    char    *base;
    int     len;
    int     counter;
    
    counter = 0;
    if (c == 'x')
        base = "0123456789abcdef";
    else if (c == 'X')
        base = "0123456789ABCDEF";
    len = 15;
    if (nb < 0)
    {
        counter += ft_putchar('-');
        nb *= -1;
    }
    if (nb >= len)
    {
        counter += ft_putnbr_hex(nb / len, c);
        counter += ft_putchar(base[nb % len]);
    }
    if (nb < len)
        counter += ft_putchar(base[nb]);
    return (counter);
}
