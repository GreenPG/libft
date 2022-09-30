/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 13:21:18 by gpasquet          #+#    #+#             */
/*   Updated: 2022/09/28 13:28:54 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	int		len;
	int		i;
	char	*new_s;

	len = ft_strlen(s);
	new_s = malloc(sizeof(char) * (len + 1));
	if (new_s == 0)
		return (0);
	i = -1;
	while (s[++i])
		new_s[i] = s[i];
	new_s[i] = 0;
	return (new_s);
}
