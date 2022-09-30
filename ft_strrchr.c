/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:39:11 by gpasquet          #+#    #+#             */
/*   Updated: 2022/09/30 14:46:10 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	c = c % 256;
	i = ft_strlen(s);
	if (c == 0 && s[0] == 0)
		return ((char *)&s[i]);
	while (i > 0)
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		--i;
	}
	if (s[i] == c)
		return ((char *)&s[i]);
	return (0);
}
