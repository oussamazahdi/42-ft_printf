# include <stdarg.h>
# include <unistd.h>
static void ft_putchar(char c)
{
    write(1, &c, 1);
   // *len = *len + 1;
}

static void ft_putstr(char *str)
{
    int i = 0;
    while (str[i])
    {
        ft_putchar(str[i]);
        i++;
    }
}

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
static void ft_putnbr_adr(long int nb)
{
    ft_putstr("0x");
    ft_putnbr_hex(nb, 'x');
}
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
    else if (specifier == 'd')
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
int main()
{
    ft_printf("hello %s, number %d adr %p", "world!",132131,"oussama");
}