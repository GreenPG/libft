/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 10:39:19 by gpasquet          #+#    #+#             */
/*   Updated: 2022/10/11 13:52:14 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*sdest;
	const char	*ssrc;

	if (dest == 0 && src == 0)
		return (0);
	sdest = dest;
	ssrc = src;
	i = 0;
	while (i < n)
	{
		sdest[i] = ssrc[i];
		i++;
	}
	return (dest);
}
