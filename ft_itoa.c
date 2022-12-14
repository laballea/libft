/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laballea <laballea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 14:20:15 by mclaudel          #+#    #+#             */
/*   Updated: 2019/10/22 14:38:40 by laballea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_calloc_bis(size_t count, size_t size)
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

static int	inttostrsize(int n)
{
	int size;

	if (n == 0)
		return (1);
	size = (n < 0 ? 1 : 0);
	while (n != 0)
	{
		n /= 10;
		size++;
	}
	return (size);
}

char		*ft_itoa(int n)
{
	char	*str;
	int		l;
	int		limit;
	int		sign;

	l = inttostrsize(n);
	if (!(str = ft_calloc_bis(1, (l + 1) * sizeof(char))))
		return (0);
	limit = (n < 0 ? 1 : 0);
	sign = (n < 0 ? -1 : 1);
	while (l-- > limit)
	{
		str[l] = (n % 10) * sign + 48;
		n /= 10;
	}
	if (sign == -1)
		str[0] = '-';
	return (str);
}
