/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozahdi <ozahdi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:44:51 by ozahdi            #+#    #+#             */
/*   Updated: 2023/12/01 19:18:41 by ozahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putstr(char *str)
{
    int len;
    int i;

    len = 0;
    i = 0;
    if(!str)
    {
        ft_putstr("(null)");
        return 0;
    }
    while (str[i])
    {
        len += ft_putchar(str[i]);
        i++;
    }
    return (len);
}
