/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauberna <pauberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 16:12:36 by pauberna          #+#    #+#             */
/*   Updated: 2023/11/02 15:06:16 by pauberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_num_len(unsigned int n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static char	*ft_unsiged_to_str(unsigned int n)
{
	char	*str;
	int		len;

	len = ft_num_len(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	while (n != 0)
	{
		str[len - 1] = (n % 10) + '0';
		n = n / 10;
		len--;
	}
	return (str);
}

int	ft_put_unint(unsigned int n)
{
	char	*str;
	int		len;

	if (n == 0)
	{
		ft_putchar('0');
		len = 1;
	}
	else
	{
		str = ft_unsiged_to_str(n);
		len = ft_putstr(str);
		free(str);
	}
	return (len);
}

/*int	main(void)
{
	unsigned int	n;
	int				len;

	n = 4294967295;
	printf("%u\n", n);
	len = ft_put_unint(n);
	ft_putchar('\n');
	ft_putnbr(len);
	return (0);
}*/
