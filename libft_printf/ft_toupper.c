/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauberna <pauberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 17:03:19 by pauberna          #+#    #+#             */
/*   Updated: 2023/09/12 19:25:53 by pauberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}

/*int	main(void)
{
	ft_putchar_fd(ft_tolower('a'), 1);
	ft_putchar_fd('\n', 1);
	ft_putchar_fd(ft_tolower('Z'), 1);
	ft_putchar_fd('\n', 1);
	ft_putchar_fd(ft_tolower('9'), 1);
	ft_putchar_fd('\n', 1);
	return (0);
}*/
