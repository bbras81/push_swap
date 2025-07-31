/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@students.42porto.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 21:56:01 by brunmigu          #+#    #+#             */
/*   Updated: 2025/07/23 22:01:23 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/pushswap.h"

static void	push(t_node **src, t_node **dest)
{
	t_node	*temp;

	if (!src || !*src)
		return ;
	temp = *src;
	*src = temp->next;
	temp->next = *dest;
	*dest = temp;
}

void	pa(t_node **from, t_node **to)
{
	push(from, to);
	ft_printf("pa\n");
}

void	pb(t_node **from, t_node **to)
{
	push(from, to);
	ft_printf("pb\n");
}
