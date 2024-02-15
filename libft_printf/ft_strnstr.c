/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauberna <marvin.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:53:20 by pauberna          #+#    #+#             */
/*   Updated: 2023/10/03 11:39:12 by pauberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	n;

	if (big == 0)
		return (NULL);
	if (*little == 0)
		return ((char *)big);
	n = 0;
	if (len == 0)
		return (0);
	while (n <= len && *big)
	{
		if (*big == *little && ft_strncmp(big, little, n) == 0)
			return ((char *)big);
		big++;
		len--;
	}
	return (NULL);
}

/*int	main(void)
{
	char	str[] = "Esta frase tem algo escondido ?";
	char	str1[] = "tem";
	ft_putendl_fd(ft_strnstr(str, str1, ft_strlen(str)), 1);
	return (0);
}*/
