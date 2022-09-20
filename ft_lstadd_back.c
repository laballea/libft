/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laballea <laballea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 14:49:07 by laballea          #+#    #+#             */
/*   Updated: 2019/10/18 13:31:01 by laballea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*ft_lstlast_bis(t_list *lst)
{
	if (lst == NULL)
		return (0);
	while (lst->next != 0)
		lst = lst->next;
	return (lst);
}

void			ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*lst;

	if (!new)
		return ;
	if (alst == NULL || *alst == NULL)
		*alst = new;
	else
	{
		lst = ft_lstlast_bis(*alst);
		lst->next = new;
	}
}
