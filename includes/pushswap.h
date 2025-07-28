/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 10:18:50 by brunmigu          #+#    #+#             */
/*   Updated: 2025/07/25 20:50:27 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

typedef struct s_node
{
	int				value;
	int				index;
	struct s_node	*next;
}					t_node;

# include "../libft/includes/libft.h"
# include <limits.h>
# include <stdlib.h>

int					ft_printf(const char *str, ...);
char				**ft_split(char const *s, char c);
void				init_stack(t_node **stack, char **args);
long				ft_atol(const char *nptr);
int					basic_error(void);
void				free_stack(t_node **stack);
void				sa(t_node **stack);
void				sb(t_node **stack);
void				ss(t_node **stack_a, t_node **stack_b);
void				pa(t_node **a, t_node **b);
void				pb(t_node **a, t_node **b);
void				ra(t_node **stack);
void				rb(t_node **stack);
void				rr(t_node **stack_a, t_node **stack_b);
void				rra(t_node **stack);
void				rrb(t_node **stack);
void				rrr(t_node **stack_a, t_node **stack_b);
void				push_swap(t_node **stack_a, t_node **stack_b);
void				sort_three(t_node **stack_a, t_node **stack_b);
#endif
