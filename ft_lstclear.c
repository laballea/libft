/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laballea <laballea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 16:38:35 by laballea          #+#    #+#             */
/*   Updated: 2019/10/18 13:56:39 by laballea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*list;
	t_list	*tmp;

	if (lst == NULL || del == NULL)
		return ;
	list = *lst;
	tmp = 0;
	while (list)
	{
		if (list->next)
			tmp = list->next;
		else
			tmp = 0;
		del(list->content);
		if (list)
			free(list);
		list = tmp;
	}
	*lst = 0;
}
