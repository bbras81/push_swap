/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@students.42porto.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 20:07:49 by brunmigu          #+#    #+#             */
/*   Updated: 2025/07/25 20:50:27 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

int	node_counter(t_node *stack)
{
	t_node	*curr;
	int		counter;

	counter = 0;
	curr = stack;
	while (curr != NULL)
	{
		counter++;
		curr = curr->next;
	}
	return (counter);
}

static int	is_sorted(t_node *stack)
{
	t_node	*curr;

	curr = stack;
	while (curr->next != NULL)
	{
		if (curr->value < curr->next->value)
		{
			curr = curr->next;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

void	push_swap(t_node **stack_a, t_node **stack_b)
{
	int	stack_size;

	stack_size = node_counter(*stack_a);
	while (!is_sorted(*stack_a))
	{
		if (stack_size == 2)
			sa(stack_a);
		else if (stack_size == 3)
			sort_three(stack_a);
		else if (stack_size > 3 && stack_size < 6)
			sort_five(stack_a, stack_b, stack_size);
		else
			radix_sort(stack_a, stack_b, stack_size);
	}
}
