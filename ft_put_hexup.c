/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hexup.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauberna <pauberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:31:07 by pauberna          #+#    #+#             */
/*   Updated: 2023/10/18 10:47:48 by pauberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_num_len(unsigned int n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		n = n / 16;
		len++;
	}
	return (len);
}

int	ft_put_hexup(unsigned int n)
{
	char	*base;

	base = "0123456789ABCDEF";
	if (n == 0)
	{
		ft_putnbr(0);
		return (1);
	}
	if (n >= 16)
	{
		ft_put_hexup(n / 16);
		ft_put_hexup(n % 16);
	}
	else
		ft_putchar(base[n]);
	return (ft_num_len(n));
}

/*int	main(void)
{
	printf("%X\n", -1234);
	int	len = ft_put_hexup(-1234);
	ft_putchar('\n');
	ft_putnbr(len);
	return (0);
}*/
