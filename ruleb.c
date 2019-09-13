/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ruleb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 12:42:33 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/09/13 12:10:36 by fmakgoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sb(t_node **head)
{
	t_node	*temp;
	t_node	*tempp;
	int		store;

	tempp = *head;
	temp = tempp->next;
	store = temp->data;
	temp->data = tempp->data;
	tempp->data = store;
}

void	rb(t_node **head)
{
	t_node	*temp;
	t_node	*tempp;

	temp = *head;
	tempp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = tempp;
	temp = tempp->next;
	tempp->next = NULL;
	*head = temp;
}

void	rrb(t_node **head)
{
	t_node	*seclast;
	t_node	*last;

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

void	pb(t_node **a, t_node **b, int data)
{
	t_node	*head;
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
