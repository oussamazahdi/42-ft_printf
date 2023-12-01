/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_uns.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozahdi <ozahdi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:47:15 by ozahdi            #+#    #+#             */
/*   Updated: 2023/12/01 15:48:43 by ozahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putnbr_uns(unsigned int nb)
{
    int len;

    len = 0;
    if (nb > 9)
    {
        len += ft_putnbr_uns(nb / 10);
        len += ft_putchar(((nb % 10) + '0'));
    }
    else
        len += ft_putchar((nb + '0'));
    return (len);
}
