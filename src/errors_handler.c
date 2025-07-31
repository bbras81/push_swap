/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors_handler.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@students.42porto.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 17:19:02 by brunmigu          #+#    #+#             */
/*   Updated: 2025/07/19 17:23:53 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

int	basic_error(void)
{
	ft_putendl_fd("Error", 2);
	exit(EXIT_FAILURE);
}

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

void	free_split(char **split)
{
	int	i;

	i = 0;
	if (!split)
		return ;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
}
