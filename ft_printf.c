/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauberna <pauberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 17:19:59 by pauberna          #+#    #+#             */
/*   Updated: 2023/11/07 12:52:22 by pauberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_print_argument(va_list arg, const char arg_type)
{
	if (arg_type == 'c')
		return (ft_putchar(va_arg(arg, int)));
	else if (arg_type == 's')
		return (ft_putstr(va_arg(arg, char *)));
	else if (arg_type == 'p')
		return (ft_put_ptr(va_arg(arg, unsigned long long)));
	else if (arg_type == 'd' || arg_type == 'i')
		return (ft_putnbr(va_arg(arg, int)));
	else if (arg_type == 'u')
		return (ft_put_unint(va_arg(arg, unsigned int)));
	else if (arg_type == 'x')
		return (ft_put_hexlow(va_arg(arg, unsigned int)));
	else if (arg_type == 'X')
		return (ft_put_hexup(va_arg(arg, unsigned int)));
	else if (arg_type == '%')
		return (ft_putchar('%'));
	else
		return (ft_putchar('%') + ft_putchar(arg_type));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	argument;
	int		n;
	int		len;

	n = 0;
	len = 0;
	if (format == NULL)
		return (-1);
	va_start(argument, format);
	while (format[n])
	{
		if (format[n] == '%')
		{
			len = len + ft_print_argument(argument, format[n + 1]);
			n++;
		}
		else
			len = len + ft_putchar(format[n]);
		n++;
	}
	va_end(argument);
	return (len);
}

/* int	main(void)
{
	printf("Um caracter minusculo: %c\n", 'a');
	printf("Um caracter maiusculo: %c\n", 'A');
	printf("Uma string : %s\n", "You have to recode the printf");
	printf("Um void pointer: %p\n", (void *)-1);
	printf("Um numero inteiro: %i\n", -2147483648);
	printf("Um numero de base 10: %d\n", 2147483647);
	printf("Um numero de base 10 unsigned: %u\n", 4294967295);
	printf("Um numero hexadecimal minusculo: %x\n", 123456789);
	printf("Um numero hexadecimal maiusculo: %X\n", 4294967294);
	printf("Uma percentagem : %%\n");
	printf("Uma flag indefenida : %y\n");
	
	ft_printf("Um caracter minusculo: %c\n", 'a');
	ft_printf("Um caracter maiusculo: %c\n", 'A');
	ft_printf("Uma string : %s\n", "You have to recode the printf");
	ft_printf("Um void pointer: %p\n", (void *)-1);
	ft_printf("Um numero inteiro: %i\n", -2147483648);
	ft_printf("Um numero de base 10: %d\n", 2147483647);
	ft_printf("Um numero de base 10 unsigned: %u\n", 4294967295);
	ft_printf("Um numero hexadecimal minusculo: %x\n", 123456789);
	ft_printf("Um numero hexadecimal maiusculo: %X\n", 4294967294);
	ft_printf("Uma percentagem : %%\n");
	ft_printf("Uma flag indefenida : %y\n");
	return (0);
} */
