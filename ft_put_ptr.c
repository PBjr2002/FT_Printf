/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_ptr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauberna <pauberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 15:02:52 by pauberna          #+#    #+#             */
/*   Updated: 2023/10/18 10:38:04 by pauberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_num_len(unsigned long long n)
{
	int	len;

	len = 2;
	while (n != 0)
	{
		n = n / 16;
		len++;
	}
	return (len);
}

static int	ft_print_ptr(unsigned long long ptr, char *base)
{
	if (ptr >= 16)
	{
		ft_print_ptr(ptr / 16, base);
		ft_print_ptr(ptr % 16, base);
	}
	else
		ft_putchar(base[ptr]);
	return (ft_num_len(ptr));
}

int	ft_put_ptr(unsigned long long ptr)
{
	int		len;
	char	*base;

	base = "0123456789abcdef";
	if (ptr == 0)
	{
		len = ft_putstr("(nil)");
		return (len);
	}
	ft_putstr("0x");
	len = ft_print_ptr(ptr, base);
	return (len);
}

/*int	main(void)
{
	char	*str;
	int		len;

	str = "n sei";
	printf("%p\n", str);
	len = ft_put_ptr(str);
	printf("\n");
	printf("%d\n", len);
	return (0);
}*/
