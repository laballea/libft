/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laballea <laballea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 14:05:42 by laballea          #+#    #+#             */
/*   Updated: 2019/10/18 10:42:21 by laballea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		len;
	char		*dest;
	char		*s;

	s = (char *)src;
	dest = dst;
	i = 0;
	while (i++ < size && *dest != '\0')
		dest++;
	len = dest - dst;
	if (size - len == 0)
		return (len + ft_strlen(src));
	i = len;
	while (*s != '\0')
	{
		if (i++ < size - 1)
		{
			*dest = *s;
			dest++;
		}
		s++;
	}
	*dest = '\0';
	return (len + s - src);
}
