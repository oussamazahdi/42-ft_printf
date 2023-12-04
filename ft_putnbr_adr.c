/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_adr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozahdi <ozahdi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:49:24 by ozahdi            #+#    #+#             */
/*   Updated: 2023/12/03 16:39:59 by ozahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_putnbr_adr(void *nb, int *len)
{
    unsigned long int n;

    n = (unsigned long int) nb;
    ft_putstr("0x", len);
    ft_putnbr_hex(n, 'x', len);
}
