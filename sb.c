/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 12:32:08 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/09/10 09:48:21 by fmakgoka         ###   ########.fr       */
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
