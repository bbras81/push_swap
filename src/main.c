/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 10:16:48 by brunmigu          #+#    #+#             */
/*   Updated: 2025/07/23 17:01:30 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

int	main(int argc, char **argv)
{
	t_node	*a;
	t_node	*b;
	t_node	*aux;

	a = NULL;
	b = NULL;
	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (EXIT_FAILURE);
	else if (argc == 2)
		argv = ft_split(argv[1], ' ');
	else
		argv = &argv[1];
	init_stack(&a, argv);
	// init_stack(&b, argv);
	aux = a;
	printf("-------a-------\n");
	while (aux != NULL)
	{
		printf("Value -> %d Index -> %d\n", aux->value, aux->index);
		aux = aux->next;
	}
	free_stack(&a);
	free_stack(&b);
	return (EXIT_SUCCESS);
}
