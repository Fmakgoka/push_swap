/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 12:30:46 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/09/11 09:59:28 by fmakgoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_node **a, t_node **b, int data)
{
	t_node *head;

	if (!(*b))
		return ;
	head = (t_node*)malloc(sizeof(t_node));
	head->data = data;
	head->next = (*a);
	(*a) = head;
	if ((*b)->next)
	{
		deletep(*b);
	}
	else
	{
		*b = NULL;
		free(*b);
	}
}
