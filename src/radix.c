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

void	sort_three(t_node **stack_a, t_node **stack_b)
{
	t_node	*curr;

	curr = *stack_a;
	(void)stack_b;
	if (curr->value > curr->next->value)
	{
		sa(stack_a);
		curr = curr->next;
	}
	else
	{
		pb(stack_a, stack_b);
		curr = curr->next;
	}
}
