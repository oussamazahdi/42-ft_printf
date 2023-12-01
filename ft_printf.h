/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozahdi <ozahdi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 11:04:46 by ozahdi            #+#    #+#             */
/*   Updated: 2023/12/01 19:23:45 by ozahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int    ft_putchar(int c);
int    ft_putnbr_adr(long int nb);
int    ft_putnbr_hex(long int nb, int c);
int    ft_putnbr_uns(unsigned int nb);
int    ft_putnbr(long long int nb);
int    ft_putstr(char *str);
int     print_format(char specifier, va_list ap);
int     ft_printf(const char *format, ...);

#endif