/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 12:52:24 by gpasquet          #+#    #+#             */
/*   Updated: 2022/09/30 18:12:29 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <limits.h>

void	*ft_calloc(size_t nmenb, size_t size)
{
	void	*ptr;

	ptr = malloc(nmenb * size);
	if (!ptr)
		return (0);
	ft_bzero(ptr, nmenb);
	return (ptr);
}
