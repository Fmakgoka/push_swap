/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 12:48:00 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/09/14 17:27:12 by fmakgoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		push_last(t_node **head, int data)
{
	t_node	*new_node;
	t_node	*temp;

	new_node = malloc(sizeof(t_node));
	new_node->data = data;
	new_node->next = NULL;
	temp = *head;
	if (*head == NULL)
		*head = new_node;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}
}

t_node		*ft_put(int agc, char **agv)
{
	t_node	*a;
	int		i;

	a = NULL;
	i = 0;
	if (agc == 0)
	{
		push_last(&a, ft_atoi(agv[0]));
		return (a);
	}
	while (i < agc)
	{
		push_last(&a, ft_atoi(agv[i]));
		i++;
	}
	return (a);
}
