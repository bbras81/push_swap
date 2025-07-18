/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 10:18:50 by brunmigu          #+#    #+#             */
/*   Updated: 2025/07/19 17:23:53 by brunmigu         ###   ########.fr       */
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
#endif
