/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 17:47:44 by gpasquet          #+#    #+#             */
/*   Updated: 2022/10/10 17:20:12 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_elt;

	new_elt = malloc(sizeof(t_list));
	if (!new_elt)
		return (0);
	new_elt->content = content;
	new_elt->next = NULL;
	return (new_elt);
}
