/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 16:50:14 by gpasquet          #+#    #+#             */
/*   Updated: 2022/10/10 11:32:48 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*begin;
	t_list	*new_elem;

	if (!lst || !f || !del)
		return (0);
	new_lst = ft_lstnew("");
	if (!new_lst)
		return (0);
	begin = new_lst;
	while (lst)
	{
		begin->content = (*f)(lst->content);
		if (lst->next)
		{
			new_elem = ft_lstnew(lst->content);
			if (!new_elem)
				ft_lstclear(&lst, del);
			ft_lstadd_back(&begin, new_elem);
			begin = begin->next;
		}
		lst = lst->next;
	}
	return (new_lst);
}
