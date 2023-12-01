/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozahdi <ozahdi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:45:57 by ozahdi            #+#    #+#             */
/*   Updated: 2023/12/01 15:49:40 by ozahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putnbr(long long int nb)
{
    int len;

    len = 0;
    if (nb < 0)
    {
        len += ft_putchar('-');
        len += ft_putnbr(-nb);
    }
    else if (nb > 9)
    {
        len += ft_putnbr(nb / 10);
        len += ft_putchar(((nb % 10) + '0'));
    }
    else
        len += ft_putchar((nb + '0'));
    return (len);
}
