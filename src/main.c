/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@students.42porto.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 19:16:12 by brunmigu          #+#    #+#             */
/*   Updated: 2025/07/01 19:21:46 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	int		i;
	char	**vector;

	i = 0;
	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (1);
	if (argc == 2)
		vector = ft_split(argv[1], ' ');
	while (vector[i])
	{
		ft_printf("%s\n", vector[i]);
		i++;
	}
	free(vector);
}
