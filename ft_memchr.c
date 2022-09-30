/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 13:05:04 by gpasquet          #+#    #+#             */
/*   Updated: 2022/09/30 12:05:51 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	uns_c;
	unsigned char	*tab;

	tab = (unsigned char *)s;
	uns_c = c;
	c = c % 256;
	i = 0;
	while (i < n)
	{
		if (tab[i] == uns_c)
			return (&tab[i]);
		i++;
	}
	return (0);
}
