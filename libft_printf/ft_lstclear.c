/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauberna <pauberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 14:56:16 by pauberna          #+#    #+#             */
/*   Updated: 2023/09/27 16:09:54 by pauberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*node;
	t_list	*next_node;

	if (lst == NULL)
		return ;
	node = *lst;
	while (node != NULL)
	{
		next_node = node->next;
		del(node->content);
		free(node);
		node = next_node;
	}
	*lst = NULL;
}

/*void	del(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*new;
	t_list	*new1;
	t_list	*new2;
	
	new = ft_lstnew("isto n e suposto desaparecer");
	new1 = ft_lstnew("mas isto e");
	new2 = ft_lstnew("isto tambem");
	ft_lstadd_back(&new, new1);
	ft_lstadd_back(&new1, new2);
	ft_lstclear(&new1, del);
	printf("%s\n", (char *)new->next->next->content);
	return (0);
}*/
