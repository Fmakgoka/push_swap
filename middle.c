/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   middle.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 08:55:53 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/09/10 10:45:08 by fmakgoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		tosize(t_node **head)
{
	int count;

	a = *head;
	count = 0;
	while (a != NULL)
	{
		count++;
		a = a->next;
	}
	return (count);
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
	clone = clonelst(current);
	sorttmp(&clone);
	if (tosize(&current) % 2 == 0)
		j = tosize(&current) / 2;
	else
		j = (tosize(&current) / 2) + 1;
	while (clone && (i < j))
	{
		if (i + 1 == j)
			median_val = clone->data;
		clone = clone->next;
		i++;
	}
	return (median_val);
}
