/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_adr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozahdi <ozahdi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:49:24 by ozahdi            #+#    #+#             */
/*   Updated: 2023/12/01 15:43:27 by ozahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putnbr_adr(long int nb)
{
    int len;

    len = 0;
    len += ft_putstr("0x");
    len += ft_putnbr_hex(nb, 'x');
    return (len);
}
