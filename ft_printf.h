/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozahdi <ozahdi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 11:04:46 by ozahdi            #+#    #+#             */
/*   Updated: 2023/12/01 14:57:28 by ozahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

void    ft_putchar(char c);
void    ft_putnbr_adr(long int nb);
void    ft_putnbr_hex(long int nb, char c);
void    ft_putnbr_uns(unsigned int nb);
void    ft_putnbr(long long int nb);
void    ft_putstr(char *str);
int     print_format(char specifier, va_list ap);
int     ft_printf(const char *format, ...);

#endif