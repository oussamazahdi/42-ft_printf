#include "ft_printf.h"

/*================================* ft_putchar *================================*/
static void ft_putchar(char c)
{
    write(1, &c, 1);
   // *len = *len + 1;
}
/*================================* ft_putstr *================================*/
static void ft_putstr(char *str)
{
    int i = 0;
    while (str[i])
    {
        ft_putchar(str[i]);
        i++;
    }
}
/*================================* ft_putnbr *================================*/
static void ft_putnbr(long long int nb)
{
    if (nb < 0)
    {
        ft_putchar('-');
        ft_putnbr(-nb);
    }
    else if (nb > 9)
    {
        ft_putnbr(nb / 10);
        ft_putchar(((nb % 10) + '0'));
    }
    else
        ft_putchar((nb + '0'));
}
/*================================* ft_putnbr_uns *================================*/
static void ft_putnbr_uns(unsigned int nb)
{
    if (nb > 9)
    {
        ft_putnbr_uns(nb / 10);
        ft_putchar(((nb % 10) + '0'));
    }
    else
        ft_putchar((nb + '0'));
}
/*================================* ft_putnbr_hex *================================*/
static void ft_putnbr_hex(long int nb, char c)
{
    char *base;
    int    len;
    
    if (c == 'x')
        base = "0123456789abcdef";
    else if (c == 'X')
        base = "0123456789ABCDEF";
    len = 15;
    if (nb < 0)
    {
        ft_putchar('-');
        nb *= -1;
    }
    if (nb >= len)
    {
        ft_putnbr_hex(nb / len, c);
        ft_putchar(base[nb % len]);
    }
    if (nb < len)
        ft_putchar(base[nb]);
}
/*================================* ft_putnbr_adr *================================*/
static void ft_putnbr_adr(long int nb)
{
    ft_putstr("0x");
    ft_putnbr_hex(nb, 'x');
}
/*================================* print_format *================================*/
static int print_format(char specifier, va_list ap)
{
    if (specifier == 'c')
        ft_putchar(va_arg(ap, int));
    else if (specifier == 's')
        ft_putstr(va_arg(ap, int));
    else if (specifier == 'p')
        ft_putnbr_adr(va_arg(ap, int));
    else if (specifier == 'i')
        ft_putnbr(va_arg(ap, int));
    else if (specifier == 'u')
        ft_putnbr_uns(va_arg(ap, int));
    else if (specifier == 'x')
        ft_putnbr_hex(va_arg(ap, int), 'x');
    else if (specifier == 'X')
        ft_putnbr_hex(va_arg(ap, int), 'X');
    else if (specifier == '%')
        ft_putstr('%');
    
}
/*
• %c Prints a single character.
• %s Prints a string (as defined by the common C convention).
• %p The void * pointer argument has to be printed in hexadecimal format. • %d Prints a decimal (base 10) number.
• %i Prints an integer in base 10.
• %u Prints an unsigned decimal (base 10) number.
• %x Prints a number in hexadecimal (base 16) lowercase format.
• %X Prints a number in hexadecimal (base 16) uppercase format.
• %% Prints a percent sign.
*/
/*================================* ft_printf *================================*/
int ft_printf(const char *format, ...)
{
    int     i = 0;
    int     counter = 0;
    va_list ap;
    
    va_start(ap, format);

    while (format[i])
    {
        if(format[i] == '%')
            counter += print_format(++format, ap);
		else
        {
            counter++;
            write(1,&format[i],1);
        }
        i++;
    }
    va_end(ap);
	return (counter);
}



// #include "ft_printf.h"

// void	putformat(char format, va_list ap, int *len)
// {
// 	if (format == '%')
// 		ft_putchar('%', len);
// 	else if (format == 'c')
// 		ft_putchar(va_arg(ap, int), len);
// 	else if (format == 'd' || format == 'i')
// 		ft_putnbr(va_arg(ap, int), len);
// 	else if ((format == 'x' || format == 'X'))
// 		ft_hex(format, va_arg(ap, unsigned int), len);
// 	else if (format == 'u')
// 		ft_putu(va_arg(ap, unsigned int), len);
// 	else if (format == 's')
// 		ft_putstr(va_arg(ap, char *), len);
// 	else if (format == 'p')
// 		putadd(va_arg(ap, void *), len);
// 	else
// 		ft_putchar(format, len);
// }

// int	ft_printf(const char *format, ...)
// {
// 	int			i;
// 	int			len;
// 	va_list		ap;

// 	i = 0;
// 	len = 0;
// 	if (write(1, "", 0) < 0)
// 		return (-1);
// 	va_start(ap, format);
// 	while (format && format[i])
// 	{
// 		if (format[i] != '%')
// 			ft_putchar(format[i], &len);
// 		else if (format[i] == '%' && format[i + 1])
// 		{
// 			putformat(format[i + 1], ap, &len);
// 			i++;
// 		}
// 		i++;
// 	}
// 	va_end(ap);
// 	return (len);
// }