/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 22:39:47 by brunmigu          #+#    #+#             */
/*   Updated: 2025/07/03 11:33:50 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static char	**check_args(char **args, int argc)
{
	char	**ret_args;

	if (argc == 2)
	{
		ret_args = ft_split(args[1], ' ');
		if (!ret_args)
			free_array(ret_args);
	}
	else
	{
		ret_args = &args[1];
	}
	return (ret_args);
}

int	main(int argc, char **argv)
{
	char			**args_checker;
	t_stack_node	*stack_a;

	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (ft_putendl_fd("Error", 1), 1);
	if (argc >= 2)
		args_checker = check_args(argv, argc);
	if (!args_checker)
	{
		return (ft_putendl_fd("Error", 1), 1);
		free_array(args_checker);
	}
	stack_a = init_stack(args_checker, argc);
	while (stack_a)
	{
		ft_printf("%d\n", stack_a->value);
		stack_a = stack_a->next;
	}
	return (0);
}
