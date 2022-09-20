/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laballea <laballea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 12:02:11 by mclaudel          #+#    #+#             */
/*   Updated: 2019/10/18 16:34:27 by laballea         ###   ########.fr       */
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

static char		*ft_s_bis(char const *s, unsigned int start, size_t len)
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
	if (
	start < ft_strlen(s))
		while (s[++i] && i < len)
			dest[i] = s[start + i];
	return (dest);
}

static int		incharset(char c, char *set)
{
	while (*set)
		if (c == *set++)
			return (1);
	return (0);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*trimmed;

	if (!s1 || !set)
		return (0);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (incharset(s1[start], (char *)set))
		start++;
	if (!s1[start])
		return (ft_calloc_bis(1, 1));
	while (incharset(s1[end], (char *)set))
		end--;
	return ((trimmed = ft_s_bis(s1, start, end - start + 1)) ? trimmed : 0);
}
