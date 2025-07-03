/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 11:35:29 by brunmigu          #+#    #+#             */
/*   Updated: 2025/07/03 12:16:01 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include <unistd.h>

static t_stack_node	*new_node(int value)
{
	t_stack_node	*new_node;

	new_node = malloc(sizeof(t_stack_node));
	if (!new_node)
		return (NULL);
	new_node->value = value;
	new_node->index = -1;
	new_node->next = NULL;
	return (new_node);
}

void	add_botton(t_stack_node **stack, t_stack_node *new)
{
	t_stack_node	*temp;

	if (!stack || !new)
		return ;
	if (!*stack)
		*stack = new;
	else
	{
		temp = *stack;
		while (temp->next)
			temp = temp->next;
		temp->next = new;
	}
}

t_stack_node	*init_stack(char **argv, int argc)
{
	t_stack_node	*head_node;
	t_stack_node	*new;
	int				i;
	int				value;

	i = 0;
	head_node = NULL;
	while (i < argc)
	{
		value = ft_atoi(argv[i]);
		new = new_node(value);
		if (!new)
		{
			free_stack(&head_node);
			return (NULL);
		}
		add_botton(&head_node, new);
		i++;
	}
	return (head_node);
}
