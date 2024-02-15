/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauberna <pauberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 15:46:24 by pauberna          #+#    #+#             */
/*   Updated: 2023/09/15 16:09:47 by pauberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	int		len;
	int		n;
	int		i;

	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	ptr = malloc (len);
	if (ptr == NULL)
		return (NULL);
	n = 0;
	while (s1[n])
	{
		ptr[n] = s1[n];
		n++;
	}
	i = 0;
	while (s2[i])
	{
		ptr[n] = s2[i];
		n++;
		i++;
	}
	ptr[n] = '\0';
	return (ptr);
}

/*int	main(void)
{
	printf("%s\n", ft_strjoin("abc def", "bhdgj jhdgs"));
}*/
