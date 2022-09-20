/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laballea <laballea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 16:16:13 by laballea          #+#    #+#             */
/*   Updated: 2019/10/18 09:36:09 by laballea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*search;

	search = (char *)s;
	while (n--)
	{
		if (*search == c)
			return ((void *)search);
		search++;
	}
	return (0);
}
