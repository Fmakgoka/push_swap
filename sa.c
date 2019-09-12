/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 12:13:03 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/09/10 10:00:11 by fmakgoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_node **head)
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
