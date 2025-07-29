/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@students.42porto.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 20:47:36 by brunmigu          #+#    #+#             */
/*   Updated: 2025/07/25 20:50:27 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

int	find_index(t_node *stack, int index)
{
	int	pos;

	pos = 0;
	while (stack)
	{
		if (stack->index == index)
			return (pos);
		stack = stack->next;
		pos++;
	}
	return (-1);
}

void	move_to_top(t_node **stack, int pos)
{
	int	size;

	size = node_counter(*stack);
	if (pos <= size / 2)
	{
		while (pos > 0)
		{
			ra(stack);
			pos--;
		}
	}
	else
	{
		while (pos < size)
		{
			rra(stack);
			pos++;
		}
	}
}

void	sort_three(t_node **stack_a)
{
	int	first;
	int	second;
	int	third;

	first = (*stack_a)->value;
	second = (*stack_a)->next->value;
	third = (*stack_a)->next->next->value;
	if (first < second && first < third)
	{
		sa(stack_a);
		ra(stack_a);
	}
	else if (first > second && first < third)
		sa(stack_a);
	else if (first < second && first > third)
		rra(stack_a);
	else if (first > second && first > third)
		ra(stack_a);
	else if (first > second && first > third && second > third)
	{
		sa(stack_a);
		ra(stack_a);
	}
}

void	sort_five(t_node **stack_a, t_node **stack_b, int size)
{
	int	pos;

	if (size == 4)
	{
		pos = find_index(*stack_a, 0);
		move_to_top(stack_a, pos);
		pb(stack_a, stack_b);
		sort_three(stack_a);
		pa(stack_a, stack_b);
	}
	else
	{
		pos = find_index(*stack_a, 0);
		move_to_top(stack_a, pos);
		pb(stack_a, stack_b);
		pos = find_index(*stack_a, 1);
		move_to_top(stack_a, pos);
		pb(stack_a, stack_b);
		sort_three(stack_a);
		pa(stack_a, stack_b);
		pa(stack_a, stack_b);
	}
}
