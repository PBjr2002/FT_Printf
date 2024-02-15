/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauberna <pauberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:28:37 by pauberna          #+#    #+#             */
/*   Updated: 2023/09/13 18:17:10 by pauberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*s;
	unsigned char		*d;

	if (dest == NULL && src == NULL)
	{
		return (dest);
	}
	if (dest < src)
	{
		return (ft_memcpy(dest, src, n));
	}
	d = dest;
	s = src;
	while (n--)
	{
		d[n] = s[n];
	}
	return (dest);
}

/*int main(void)
{
	char	str[] = "Copia esta";
	char	dest[1];
	ft_putstr_fd(ft_memmove(dest, str, 10), 1);
	ft_putchar_fd('\n', 1);
	return (0);
}*/
