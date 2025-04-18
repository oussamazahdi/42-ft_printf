/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozahdi <ozahdi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:45:57 by ozahdi            #+#    #+#             */
/*   Updated: 2023/12/05 18:41:23 by ozahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_putnbr(long long int nb, int *len)
{
	if (nb < 0)
	{
		ft_putchar('-', len);
		ft_putnbr(-nb, len);
	}
	else if (nb > 9)
	{
		ft_putnbr((nb / 10), len);
		ft_putchar(((nb % 10) + '0'), len);
	}
	else
		ft_putchar((nb + '0'), len);
}

