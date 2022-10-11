/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:42:15 by gpasquet          #+#    #+#             */
/*   Updated: 2022/10/10 17:18:46 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	int		i;
	int		s_len;
	char	*new_s;

	if (s == 0)
		return (0);
	s_len = ft_strlen(s);
	new_s = malloc(sizeof(char) * (s_len + 1));
	if (!new_s)
		return (0);
	i = 0;
	while (s[i])
	{
		new_s[i] = (*f)(i, s[i]);
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}
