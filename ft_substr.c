/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laballea <laballea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 11:08:15 by mclaudel          #+#    #+#             */
/*   Updated: 2019/10/25 11:19:12 by laballea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		*ft_calloc_bis(size_t count, size_t size)
{
	void		*tab;

	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	if (!(tab = malloc(size * count)))
		return (0);
	ft_bzero(tab, count * size);
	return (tab);
}

char			*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	i;

	if (!s)
		return (0);
	if (start >= ft_strlen(s))
		return (ft_calloc_bis(1, 1));
	if (!(dest = (ft_calloc_bis(1, len + 1))))
		return (0);
	i = -1;
	if (start < ft_strlen(s))
		while (s[++i] && i < len)
			dest[i] = s[start + i];
	return (dest);
}
