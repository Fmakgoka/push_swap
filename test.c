/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgoka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 14:47:16 by fmakgoka          #+#    #+#             */
/*   Updated: 2019/09/12 11:16:24 by fmakgoka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "push_swap.h"

void	print(struct node *structA, struct node *structB)
{
	struct node	*temp1;
	struct node *temp2;

	temp1 = structA;
	temp2 = structB;

	ft_putendl("ListA\tListB");
	while (temp1 || temp2)
	{
		if (temp1)
		{
			ft_putnbr(temp1->data);
			temp1 = temp1->next;
		}
		ft_putchar('\t');
		if (temp2)
		{
			ft_putnbr(temp2->data);
			temp2 =temp2->next;
		}
		ft_putchar('\n');

	}
}

#include <stdio.h>
int		main(int argc, char **argv)
{
	struct node *a;
	struct node *b;
	struct node *temp;
	int *i;
	int x = 0;
	//char *flag

	a = ft_put(argc, argv);
	//ft_putendl("hey");
	//print(a, b);
	//ft_putendl("hey");
	temp = clonelst(a);
	//sort3(&a);
	//sort4(&a, &b);
	//sort5(&a, &b);
	//sort_hundred_less(&a, &b);
	sort_fivehund_less(&a, &b);
	//print(a, b);
	print(a, b);


	return(0); 
}
