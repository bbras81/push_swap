/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@students.42porto.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 17:50:33 by brunmigu          #+#    #+#             */
/*   Updated: 2025/07/24 18:06:37 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/pushswap.h"
#include <unistd.h>

void	reverse(t_node **stack)
{
	t_node	*last;
	t_node	*first;
	t_node	*temp;

	temp = *stack;
	last = *stack;
	while (last->next->next != NULL)
		last = last->next;
	first = last->next;
	last->next = NULL;
	first->next = temp;
	*stack = first;
}

void	rra(t_node **stack)
{
	reverse(stack);
	ft_printf("rra\n");
}
void	rrb(t_node **stack)
{
	reverse(stack);
	ft_printf("rrb\n");
}
void	rrr(t_node **stack_a, t_node **stack_b)
{
	reverse(stack_a);
	reverse(stack_b);
	ft_printf("rrr\n");
}
