
#include "push_swap.h"

int	ft_distance(t_node **head)
{
	int maxi = ft_max(head);
	int i = 0;
	int j = 0;
	t_node  *current = *head;
	if (tosize(head) < 3)
		return 1;
	while (current->next && current->next->data != maxi)
	{
		current = current->next;
		i++;
	}
	while (current->next != NULL)
	{
		current = current->next;
		j++;
	}
	if (i > j)
	{
		return 1;

	}
	else
		return 0;
}
