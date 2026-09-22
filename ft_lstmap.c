/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aal-zahr <aal-zahr@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 16:07:02 by aal-zahr          #+#    #+#             */
/*   Updated: 2026/09/21 17:15:06 by aal-zahr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	**current;
	void	*content;

	new_list = NULL;
	current = &new_list;
	while (lst)
	{
		content = f(lst->content);
		*current = malloc(sizeof(t_list));
		if (!*current)
		{
			del(content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		(*current)->content = content;
		(*current)->next = NULL;
		current = &(*current)->next;
		lst = lst->next;
	}
	return (new_list);
}
