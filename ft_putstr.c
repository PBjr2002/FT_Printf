/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauberna <pauberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 18:08:00 by pauberna          #+#    #+#             */
/*   Updated: 2023/10/16 13:09:54 by pauberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	n;

	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	n = ft_strlen(str);
	ft_putstr_fd(str, 1);
	return (n);
}

/*int	main(void)
{
	char	*str;

	str = "esta string vai ser impressa.";
	printf("%s\n", str);
	ft_putstr(str);
	return (0);
}*/
