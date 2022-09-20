/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_uns.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laballea <laballea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 16:15:20 by laballea          #+#    #+#             */
/*   Updated: 2019/11/13 13:54:02 by laballea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_test_base(char *base)
{
	int i;
	int j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '\0' || base[i] == '+')
			return (0);
		if (base[i] < 32 || base[i] > 126)
			return (0);
		j = 1;
		while (base[i + j] != '\0')
		{
			if (base[i + j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

static int	ft_conv_base(size_t nbr, char *base, int bool)
{
	int tab[100];
	int n;
	int res;
	int i;

	i = 0;
	res = 0;
	n = ft_strlen(base);
	while (nbr != 0)
	{
		tab[i] = nbr % n;
		nbr = nbr / n;
		i++;
	}
	n = i - 1;
	i = 0;
	while (n != -1)
	{
		res = base[tab[n]];
		if (bool)
			ft_putchar_fd(res, 1);
		i++;
		n--;
	}
	return (i);
}

int			ft_putnbr_base_uns(size_t nb, char *base, int bool)
{
	int neg;

	neg = 0;
	if (nb == 0 && bool)
	{
		ft_putchar_fd('0', 1);
		return (1);
	}
	else if (!bool && nb == 0)
		return (1);
	if (ft_test_base(base))
		return (ft_conv_base(nb, base, bool) + neg);
	return (0);
}
