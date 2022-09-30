/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 15:10:22 by gpasquet          #+#    #+#             */
/*   Updated: 2022/09/29 18:34:26 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	little_len;
	int		a;

	little_len = ft_strlen(little);
	if (little_len == 0)
		return ((char *)big);
	i = -1;
	while (big[++i] && i < len)
	{
		j = 0;
		if (big[i] == little[j])
		{
			a = 0;
			while (little[++j] && (i + j) < len)
			{
				if (big[i + j] != little[j])
					a++;
			}
			if (a == 0 && j == little_len)
				return ((char *)&big[i]);
		}
	}
	return (0);
}
