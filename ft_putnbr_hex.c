/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozahdi <ozahdi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:48:37 by ozahdi            #+#    #+#             */
/*   Updated: 2023/12/05 18:40:27 by ozahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_hex(unsigned int nb, int c, int *len)
{
	char	*base;

	if (c == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (nb <= 15)
		ft_putchar(base[nb], len);
	else
	{
		ft_putnbr_hex((nb / 16), c, len);
		ft_putnbr_hex((nb % 16), c, len);
	}
}

