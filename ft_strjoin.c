/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 12:08:54 by gpasquet          #+#    #+#             */
/*   Updated: 2022/10/10 17:17:43 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*new_s;
	size_t		s1_len;
	size_t		s2_len;
	size_t		lcat_size;

	if (s1 == 0 || s2 == 0)
		return (0);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	new_s = malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!new_s)
		return (0);
	ft_strlcpy(new_s, s1, s1_len + 1);
	lcat_size = s1_len + s2_len + 1;
	ft_strlcat(new_s, s2, lcat_size);
	return (new_s);
}
