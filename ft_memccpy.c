/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laballea <laballea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 17:25:14 by laballea          #+#    #+#             */
/*   Updated: 2019/10/18 10:03:58 by laballea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*desti;
	unsigned char	*source;

	desti = (unsigned char *)dst;
	source = (unsigned char *)src;
	while (n--)
	{
		*desti = *source;
		if (*desti == (unsigned char)c)
			return (desti + 1);
		desti++;
		source++;
	}
	return (0);
}
