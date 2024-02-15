/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauberna <pauberna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:10:57 by pauberna          #+#    #+#             */
/*   Updated: 2023/09/27 16:10:09 by pauberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*void	function(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*new;
	t_list	*new1;
	t_list	*new2;
	
	new = ft_lstnew("isto n e suposto ser mexido");
	new1 = ft_lstnew("mas isto e");
	new2 = ft_lstnew("isto tambem");
	ft_lstadd_back(&new, new1);
	ft_lstadd_back(&new1, new2);
	ft_lstiter(new1, function);
	printf("%s\n", (char *)new->next->next->content);
	return (0);
}*/
