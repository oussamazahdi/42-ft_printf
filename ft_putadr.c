/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozahdi <ozahdi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:49:24 by ozahdi            #+#    #+#             */
/*   Updated: 2023/12/05 18:20:25 by ozahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// void ft_putnbr_adr(long long nb, int *len)
// {
//     ft_putstr("0x", len);
//    // ft_putnbr_hex(n, 'x', len);
//     char    *base;

//         base = "0123456789abcdef";
//     if (nb < 0)
//     {
//       //  ft_putchar('-', len);
//         ft_putnbr_adr(-nb, len);
//     }
//     if (nb <= 15)
//         ft_putchar(base[nb], len);
//     else
//     {
//         ft_putnbr_adr((nb / 16), len);
//         ft_putnbr_adr((nb % 16), len);
//     }
// }
static void ft_putnbr_adr(unsigned long long nb, int *len)
{
    char    *base;

    base = "0123456789abcdef";
    // if (nb < 0)
    //     ft_putnbr_adr(-nb, len);
    // if (nb < 0)
    //     ft_putadr(-nb, len);
    if (nb <= 15)
        ft_putchar(base[nb], len);
    else
    {
        ft_putnbr_adr((nb / 16), len);
        ft_putchar(base[(nb % 16)], len);
        // ft_putnbr_adr((nb % 16), len);
    }
}
void ft_putadr(void *nbr, int *len)
{
    unsigned long long nb;

    nb = (unsigned long long)nbr;
    ft_putstr("0x", len);
    ft_putnbr_adr(nb, len);
}
