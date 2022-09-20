/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoaunsigned.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laballea <laballea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 18:44:00 by marvin            #+#    #+#             */
/*   Updated: 2019/10/25 10:38:26 by laballea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	inttostrsize(unsigned long long n)
{
	int size;

	if (n == 0)
		return (1);
	size = 0;
	while (n != 0)
	{
		n /= 10;
		size++;
	}
	return (size);
}

char		*ft_itoaunsigned(unsigned long long n)
{
	char	*str;
	int		l;
	int		limit;

	l = inttostrsize(n);
	if (!(str = ft_calloc(1, (l + 1) * sizeof(char))))
		return (0);
	limit = 0;
	str[l] = '\0';
	while (l-- > limit)
	{
		str[l] = (n % 10) + 48;
		n /= 10;
	}
	return (str);
}
