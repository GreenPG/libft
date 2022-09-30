/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 16:11:12 by gpasquet          #+#    #+#             */
/*   Updated: 2022/09/30 14:58:00 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	long unsigned int	i;
	int					a;
	int					b;

	i = -1;
	while ((s1[++i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
		{	
			a = s1[i];
			if (a < 0)
				a = -a;
			a = a % 256;
			b = s2[i];
			if (b < 0)
				b = -b;
			b = b % 256;
			return (a - b);
		}
	}
	return (0);
}
