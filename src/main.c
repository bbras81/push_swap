/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 10:16:48 by brunmigu          #+#    #+#             */
/*   Updated: 2025/07/31 12:00:14 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

static void	only_nbr(char **argv, int coutes)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (argv[i])
	{
		while (argv[i][j])
		{
			if (!ft_isdigit(argv[i][j]))
			{
				if (coutes == 1)
					free_split(argv);
				basic_error();
			}
			j++;
		}
		j = 0;
		i++;
	}
}

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
	only_nbr(argv, coutes);
	init_stack(&a, argv, coutes);
	push_swap(&a, &b);
	if (coutes == 1)
		free_split(argv);
	free_stack(&a);
	free_stack(&b);
	return (EXIT_SUCCESS);
}
