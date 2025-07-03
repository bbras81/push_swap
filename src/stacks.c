/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@students.42porto.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 11:35:29 by brunmigu          #+#    #+#             */
/*   Updated: 2025/07/03 11:55:54 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

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

t_stack_node	*init_stack(int argc, char **argv)
{
	t_stack_node	*head_node;
	t_stack_node	*new;
	int				i;
	int				value;

	i = 0;
	while (argv[i])
	{
		value = ft_atoi(argv[i]);
		new = new_node(value);
	}
	return (head_node);
}
