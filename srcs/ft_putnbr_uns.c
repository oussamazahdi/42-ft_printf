/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_uns.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozahdi <ozahdi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:47:15 by ozahdi            #+#    #+#             */
/*   Updated: 2023/12/05 18:37:47 by ozahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_putnbr_uns(unsigned int nb, int *len)
{
	if (nb > 9)
	{
		ft_putnbr_uns((nb / 10), len);
		ft_putchar(((nb % 10) + '0'), len);
	}
	else
		ft_putchar((nb + '0'), len);
}

