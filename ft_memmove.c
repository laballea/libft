/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laballea <laballea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 14:58:32 by laballea          #+#    #+#             */
/*   Updated: 2019/10/18 10:07:39 by laballea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*desti;
	const char	*source;
	char		*enddest;
	const char	*endsource;

	if (dst == src)
		return (dst);
	desti = dst;
	source = src;
	enddest = desti + (len - 1);
	endsource = source + (len - 1);
	if (desti < source)
	{
		while (len--)
			*desti++ = *source++;
	}
	else
	{
		while (len--)
			*enddest-- = *endsource--;
	}
	return (dst);
}
