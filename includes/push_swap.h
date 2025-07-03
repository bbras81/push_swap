/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 19:17:53 by brunmigu          #+#    #+#             */
/*   Updated: 2025/07/03 11:55:54 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <stdbool.h>
# include <stdlib.h>

typedef struct s_stack_node
{
	int					value;
	int					index;
	struct s_stack_node	*next;
}						t_stack_node;

int						ft_atoi(const char *nptr);
int						ft_printf(const char *str, ...);
char					**ft_split(char const *s, char c);
void					free_array(char **arr);
void					ft_putendl_fd(char *s, int fd);
t_stack_node			*init_stack(int argc, char **argv);
void free_stack(t_stack_node **stack);
#endif
