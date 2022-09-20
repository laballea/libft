/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laballea <laballea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 15:30:32 by laballea          #+#    #+#             */
/*   Updated: 2019/10/18 16:25:45 by laballea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_calloc(size_t count, size_t size)
{
	void		*tab;

	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	if (!(tab = malloc(size * count)))
		return (0);
	ft_bzero(tab, count);
	return (tab);
}
