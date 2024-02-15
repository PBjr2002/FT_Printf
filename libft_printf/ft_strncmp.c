/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauberna <pauberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:24:06 by pauberna          #+#    #+#             */
/*   Updated: 2023/09/14 15:21:16 by pauberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	while (*ptr1 == *ptr2 && n != 0 && *ptr1)
	{
		ptr1++;
		ptr2++;
		n--;
	}
	if (n != 0)
		return (*ptr1 - *ptr2);
	else
		return (0);
}

/*int	main(void)
{
	char	str[] = "Levar CS";
	char	str1[] = "Objetivo e levar CS na primeira semana";
	ft_putnbr_fd(ft_strncmp(str, str1, 5), 1);
	ft_putchar_fd('\n', 1);
	return (0);
}*/
