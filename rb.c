/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 10:40:38 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/09/10 10:05:58 by fmakgoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rb(t_node **head)
{
	t_node *temp;
	t_node *tempp;

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
