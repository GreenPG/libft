/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 11:19:36 by gpasquet          #+#    #+#             */
/*   Updated: 2022/09/30 15:45:03 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int			i;
	char		*sdest;
	const char	*ssrc;

	sdest = dest;
	ssrc = src;
	if (ssrc > sdest)
	{		
		i = -1;
		while (++i < (int)n)
				sdest[i] = ssrc[i];
	}
	else
	{
		while (n > 0)
		{	
			sdest[n - 1] = ssrc[n - 1];
			n--;
		}
	}
	return (dest);
}
