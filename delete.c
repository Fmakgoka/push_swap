/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delete.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 15:12:37 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/09/10 10:54:39 by fmakgoka         ###   ########.fr       */
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
