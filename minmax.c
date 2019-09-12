/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minmax.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 11:16:15 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/09/10 10:10:53 by fmakgoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_min(t_node **head)
{
	t_node	*temp;
	int		min;

	temp = *head;
	min = (*head)->data;
	while (temp->next != NULL)
	{
		if (temp->data < min)
			min = temp->data;
		temp = temp->next;
	}
	if (temp->data < min)
		min = temp->data;
	return (min);
}

int		ft_max(t_node **head)
{
	t_node	*temp;
	int		max;

	temp = *head;
	max = (*head)->data;
	while (temp->next != NULL)
	{
		if (temp->data > max)
			max = temp->data;
		temp = temp->next;
	}
	if (temp->data > max)
		max = temp->data;
	return (max);
}
