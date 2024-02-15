/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauberna <pauberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 16:13:31 by pauberna          #+#    #+#             */
/*   Updated: 2023/09/15 17:57:38 by pauberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		n;
	int		i;

	if (set == NULL)
		return (ft_strdup(s1));
	n = 0;
	i = ft_strlen(s1) - 1;
	while (s1[n] && ft_strchr(set, s1[n]))
		n++;
	while (i > n && ft_strchr(set, s1[i]))
		i--;
	str = ft_substr(s1, n, i - n + 1);
	return (str);
}

/*int		main(void)
{
	printf("%s\n", ft_strtrim("qualquer coisa vai ser removida", "da"));
	return (0);
}*/
