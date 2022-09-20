/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laballea <laballea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 14:05:10 by laballea          #+#    #+#             */
/*   Updated: 2019/10/18 13:56:37 by laballea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *newl;
	t_list *el;

	if (!lst || !f || !del)
		return (0);
	newl = 0;
	while (lst)
	{
		if (!(el = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&newl, del);
			return (0);
		}
		ft_lstadd_back(&newl, el);
		lst = lst->next;
	}
	return (newl);
}
