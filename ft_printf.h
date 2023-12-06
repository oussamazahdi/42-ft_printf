/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozahdi <ozahdi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 11:04:46 by ozahdi            #+#    #+#             */
/*   Updated: 2023/12/05 18:45:27 by ozahdi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <limits.h>

void	ft_putchar(char c, int *len);
void	ft_putadr(void *nbr, int *len);
void	ft_putnbr_hex(unsigned int nb, int c, int *len);
void	ft_putnbr_uns(unsigned int nb, int *len);
void	ft_putnbr(long long int nb, int *len);
void	ft_putstr(char *str, int *len);
int		ft_printf(const char *format, ...);

#endif
