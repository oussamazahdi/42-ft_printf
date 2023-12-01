/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozahdi <ozahdi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:55:23 by ozahdi            #+#    #+#             */
/*   Updated: 2023/12/01 14:55:41 by ozahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
    int     i = 0;
    int     counter = 0;
    va_list ap;
    
    va_start(ap, format);

    while (format[i])
    {
        if(format[i] == '%')
        {  
          i++;;
            print_format(format[i], ap);
        }
        else
        {
            counter++;
            write(1, &format[i], 1);
        }
        i++;
    }
    va_end(ap);
    return (counter);
}
