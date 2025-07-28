/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 12:13:19 by brunmigu          #+#    #+#             */
/*   Updated: 2025/07/23 12:16:45 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

void	free_stack(t_node **stack)
{
	t_node	*curr;
	t_node	*aux;

	curr = *stack;
	while (curr != NULL)
	{
		aux = curr;
		curr = curr->next;
		free(aux);
	}
	*stack = NULL;
}

static void	assing_indexes(t_node *stack)
{
	t_node	*current;
	t_node	*compare;
	int		index;

	current = stack;
	while (current)
	{
		compare = stack;
		index = 0;
		while (compare)
		{
			if (compare->value < current->value)
				index++;
			compare = compare->next;
		}
		current->index = index;
		current = current->next;
	}
}

static int	is_duplicated(t_node *stack, int nbr)
{
	while (stack != NULL)
	{
		if (stack->value == nbr)
		{
			return (EXIT_FAILURE);
		}
		stack = stack->next;
	}
	return (EXIT_SUCCESS);
}

static void	append_node(t_node **stack, int value)
{
	t_node	*new;
	t_node	*curr;

	new = ft_calloc(1, sizeof(t_node));
	if (!new)
		return ;
	new->index = -1;
	new->value = value;
	new->next = NULL;
	if (*stack == NULL)
	{
		*stack = new;
		return ;
	}
	curr = *stack;
	while (curr->next != NULL)
	{
		curr = curr->next;
	}
	curr->next = new;
}

void	init_stack(t_node **stack, char **args)
{
	int		i;
	long	nbr;

	i = -1;
	nbr = 0;
	if (!stack || !args)
		return ;
	while (args[++i])
	{
		nbr = ft_atol(args[i]);
		if (nbr > INT_MAX || nbr < INT_MIN)
		{
			free_stack(stack);
			basic_error();
		}
		if (is_duplicated(*stack, nbr))
		{
			free_stack(stack);
			basic_error();
		}
		append_node(stack, (int)nbr);
	}
	assing_indexes(*stack);
}
