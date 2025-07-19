/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 12:13:19 by brunmigu          #+#    #+#             */
/*   Updated: 2025/07/19 17:23:53 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

t_node	*new_node(int value)
{
  t_node	*new;

  new = ft_calloc(1, sizeof(t_node));
  if (!new)
    return (NULL);
  new->index = -1;
  new->value = value;
  new->next = NULL;
  return (new);
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
      basic_error();

      
    new_node(ft_atoi(args[i]));
  }
}
