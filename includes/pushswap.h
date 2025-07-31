/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 10:18:50 by brunmigu          #+#    #+#             */
/*   Updated: 2025/07/29 13:28:16 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include "../libft/includes/libft.h"
# include <limits.h>
# include <stdlib.h>

typedef struct s_node
{
	int				value;
	int				index;
	struct s_node	*next;
}					t_node;

int					ft_printf(const char *str, ...);
char				**ft_split(char const *s, char c);
void				init_stack(t_node **stack, char **args, int coutes);
long				ft_atol(const char *nptr);
int					basic_error(void);
void				free_stack(t_node **stack);
void				free_split(char **split);
void				sa(t_node **stack);
void				sb(t_node **stack);
void				ss(t_node **stack_a, t_node **stack_b);
void				pa(t_node **from, t_node **to);
void				pb(t_node **from, t_node **to);
void				ra(t_node **stack);
void				rb(t_node **stack);
void				rr(t_node **stack_a, t_node **stack_b);
void				rra(t_node **stack);
void				rrb(t_node **stack);
void				rrr(t_node **stack_a, t_node **stack_b);
void				push_swap(t_node **stack_a, t_node **stack_b);
void				sort_three(t_node **stack_a);
void				sort_five(t_node **stack_a, t_node **stack_b, int size);
int					find_index(t_node *stack, int index);
int					node_counter(t_node *stack);
void				radix_sort(t_node **stack_a, t_node **stack_b, int size);
#endif
