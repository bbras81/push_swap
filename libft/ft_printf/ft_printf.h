/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 18:42:30 by brunmigu          #+#    #+#             */
/*   Updated: 2025/05/05 11:58:11 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <limits.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdio.h>
# include <unistd.h>

int	ft_printf(const char *str, ...);
int	ft_print_str(char *str);
int	ft_print_dec(int nbr);
int	ft_print_char(char c);
int	ft_print_udec(unsigned int nbr);
int	ft_print_hex(unsigned long nbr, char *base);
int	ft_print_ptr(void *ptr);
#endif
