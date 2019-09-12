/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ruleall.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 12:49:20 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/09/12 12:57:30 by fmakgoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	deletep(t_node *head)
{
	t_node	*temp;

	temp = head->next;
	head->data = head->next->data;
	head->next = temp->next;
	temp->next = NULL;
	free(temp);
}

void	rr(t_node **a, t_node **b)
{
	ra(a);
	rb(b);
}

void	rrr(t_node **a, t_node **b)
{
	rra(a);
	rrb(b);
}
