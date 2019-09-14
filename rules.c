/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 12:33:48 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/09/15 01:00:28 by fmakgoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_node **head)
{
	t_node	*temp;
	t_node	*tempp;
	int		store;

	if (!tosize(head) || tosize(head) == 1)
		return ;
	tempp = *head;
	temp = tempp->next;
	store = temp->data;
	temp->data = tempp->data;
	tempp->data = store;
}

void	ra(t_node **head)
{
	t_node	*temp;
	t_node	*tempp;

	temp = *head;
	tempp = *head;
	if (!tosize(head) || tosize(head) == 1)
		return ;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = tempp;
	temp = tempp->next;
	tempp->next = NULL;
	*head = temp;
}

void	rra(t_node **head)
{
	t_node	*seclast;
	t_node	*last;

	if (!tosize(head))
		return ;
	seclast = NULL;
	last = *head;
	if (*head == NULL || (*head)->next == NULL)
		return ;
	while (last->next != NULL)
	{
		seclast = last;
		last = last->next;
	}
	seclast->next = NULL;
	last->next = *head;
	*head = last;
}

void	pa(t_node **a, t_node **b, int data)
{
	t_node	*head;

	head = (t_node*)malloc(sizeof(t_node));
	head->data = data;
	head->next = (*a);
	(*a) = head;
	if ((*b)->next)
	{
		deletep(b);
	}
	else
	{
		free(*b);
		*b = NULL;
	}
}
