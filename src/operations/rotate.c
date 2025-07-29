/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@students.42porto.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 07:21:30 by brunmigu          #+#    #+#             */
/*   Updated: 2025/07/24 07:22:13 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/pushswap.h"
#include <unistd.h>

static void	rotate(t_node **stack)
{
	t_node	*first;
	t_node	*last;

	;
	if (!stack || !*stack || !(*stack)->next)
		return ;
	last = *stack;
	while (last->next != NULL)
		last = last->next;
	first = *stack;
	*stack = (*stack)->next;
	last->next = first;
	first->next = NULL;
}

void	ra(t_node **stack)
{
	rotate(stack);
	ft_printf("ra\n");
}
void	rb(t_node **stack)
{
	rotate(stack);
	ft_printf("rb\n");
}
void	rr(t_node **stack_a, t_node **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
	ft_printf("rr\n");
}
