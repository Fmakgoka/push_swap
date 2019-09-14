/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorttmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 11:05:15 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/09/14 17:03:16 by fmakgoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_lstadd(t_node **alst, t_node *new)
{
	new->next = *alst;
	*alst = new;
}

t_node		*ft_lstnew(int content)
{
	t_node *lst;

	lst = (t_node*)malloc(sizeof(t_node));
	lst->data = content;
	lst->next = NULL;
	return (lst);
}

t_node		*ft_lstmap(t_node *lst)
{
	t_node *new_lst;
	t_node *new_elem;
	t_node *prev_elem;

	new_lst = NULL;
	if (lst)
	{
		new_lst = ft_lstnew(lst->data);
		prev_elem = new_lst;
		lst = lst->next;
		while (lst)
		{
			ft_lstadd(&new_elem, ft_lstnew(lst->data));
			prev_elem->next = new_elem;
			prev_elem = new_elem;
			lst = lst->next;
		}
		prev_elem->next = NULL;
	}
	return (new_lst);
}

void		sorttmp(t_node **head)
{
	t_node	*tmp;
	t_node	*tmp2;
	int		list;

	tmp = *head;
	while (tmp->next != NULL)
	{
		tmp2 = tmp->next;
		while (tmp2 != NULL)
		{
			if (tmp->data > tmp2->data)
			{
				list = tmp->data;
				tmp->data = tmp2->data;
				tmp2->data = list;
			}
			tmp2 = tmp2->next;
		}
		tmp = tmp->next;
	}
}
