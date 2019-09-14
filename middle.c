/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   middle.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 08:55:53 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/09/14 16:51:56 by fmakgoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		tosize(t_node **head)
{
	int		count;
	t_node	*a;

	a = *head;
	count = 0;
	while (a != NULL)
	{
		count++;
		a = a->next;
	}
	return (count);
}

int		get_median(t_node *head, int i, int j)
{
	t_node *ptr;

	ptr = head;
	while (ptr && (i < j))
	{
		if (i + 1 == j)
			return (ptr->data);
		ptr = ptr->next;
		i++;
	}
	return (0);
}

int		middle(t_node **head)
{
	int		median_val;
	t_node	*current;
	t_node	*clone;
	int		i;
	int		j;

	i = 0;
	current = *head;
	clone = ft_lstmap(current);
	sorttmp(&clone);
	if (tosize(&current) % 2 == 0)
		j = tosize(&current) / 2;
	else
		j = (tosize(&current) / 2) + 1;
	median_val = get_median(clone, i, j);
	ft_lstdel(&clone);
	return (median_val);
}
