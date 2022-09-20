/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laballea <laballea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 11:59:33 by laballea          #+#    #+#             */
/*   Updated: 2019/10/16 14:09:55 by laballea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	*mem;

	str = (char *)s;
	mem = 0;
	while (*str)
	{
		if (*str == c)
			mem = str;
		str++;
	}
	if (c == '\0')
		return ((char *)str);
	return (mem);
}
