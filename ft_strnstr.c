/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laballea <laballea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 14:08:26 by laballea          #+#    #+#             */
/*   Updated: 2019/10/18 10:22:58 by laballea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	l;

	i = 0;
	l = 0;
	if (*s2 == '\0')
		return ((char *)s1);
	if (s1 == NULL && len == 0)
		return (0);
	while (*s1 != '\0' && l < len)
	{
		if (*s1 == s2[i])
		{
			while (s1[i] == s2[i] && s1[i] && i + l < len)
				i++;
			if (s2[i] == '\0')
				return ((char *)s1);
			else
				i = 0;
		}
		s1++;
		l++;
	}
	return (0);
}
