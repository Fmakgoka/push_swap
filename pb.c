/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 12:19:11 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/09/11 09:59:33 by fmakgoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_node **a, t_node **b, int data)
{
	t_node *head;

	head = (t_node*)malloc(sizeof(t_node));
	head->data = data;
	head->next = (*b);
	(*b) = head;
	if ((*a)->next)
	{
		deletep(*a);
	}
	else
	{
		(*a) = NULL;
		free(*a);
	}
}
