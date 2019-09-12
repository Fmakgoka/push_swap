/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorttmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 11:05:15 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/09/10 09:41:55 by fmakgoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node		*clonelst(t_node *head)
{
	t_node *newnode;

	newnode = (t_node*)malloc(sizeof(t_node));
	if (head == NULL)
		return (NULL);
	else
	{
		newnode->data = head->data;
		newnode->next = clonelst(head->next);
		return (newnode);
	}
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
