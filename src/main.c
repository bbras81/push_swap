/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 10:16:48 by brunmigu          #+#    #+#             */
/*   Updated: 2025/07/29 13:27:55 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

int	main(int argc, char **argv)
{
	t_node	*a;
	t_node	*b;
	int		coutes;

	a = NULL;
	b = NULL;
	coutes = 0;
	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (EXIT_FAILURE);
	else if (argc == 2)
	{
		argv = ft_split(argv[1], ' ');
		coutes = 1;
	}
	else
		argv = &argv[1];
	init_stack(&a, argv);
	push_swap(&a, &b);
	if (coutes == 1)
		free_split(argv);
	free_stack(&a);
	free_stack(&b);
	return (EXIT_SUCCESS);
}
