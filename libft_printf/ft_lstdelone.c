/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauberna <pauberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:00:25 by pauberna          #+#    #+#             */
/*   Updated: 2023/09/27 16:09:21 by pauberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst == NULL)
		return ;
	del(lst->content);
	free(lst);
}

/*void	del(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*new;
	t_list	*new1;
	
	new = ft_lstnew("isto n e suposto desaparecer");
	new1 = ft_lstnew("mas isto e");
	ft_lstadd_back(&new, new1);
	ft_lstdelone(new1, del);
	printf("%s\n", (char *)new->next->content);
	return (0);
}*/
