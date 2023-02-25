/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-stef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 12:30:15 by adi-stef          #+#    #+#             */
/*   Updated: 2023/01/22 14:59:27 by adi-stef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*tmp;

	if (!lst)
		return (0);
	new = ft_lstnew(f(lst->content));
	tmp = new;
	while (lst->next)
	{
		lst = lst->next;
		if (!(lst->content))
			del(lst->content);
		new->next = ft_lstnew(f(lst->content));
		new = new->next;
	}
	return (tmp);
}
