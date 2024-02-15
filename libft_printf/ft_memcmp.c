/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauberna <pauberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:34:37 by pauberna          #+#    #+#             */
/*   Updated: 2023/09/14 15:40:23 by pauberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	while (*ptr1 == *ptr2 && n > 1)
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

/*int main(void)
{
	char	str[] = "Isto ta guardado algures";
	char	str1[] = "Isto tambem mas nao sei onde";
	ft_putnbr_fd(ft_memcmp(str, str1, 5), 1);
	return (0);
}*/
