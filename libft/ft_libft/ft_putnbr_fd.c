/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 12:10:23 by brunmigu          #+#    #+#             */
/*   Updated: 2025/07/10 22:20:42 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/**
 * @brief Outputs an integer to the given file descriptor.
 *
 * @param n The integer to output.
 * @param fd The file descriptor.
 */
void	ft_putnbr_fd(int n, int fd)
{
	long	nb;
	char	digit;

	nb = n;
	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else if (nb < 0)
	{
		nb *= -1;
		write(fd, "-", 1);
		ft_putnbr_fd(nb, fd);
	}
	else if (nb > 9)
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putnbr_fd(nb % 10, fd);
	}
	else
	{
		digit = nb + '0';
		write(fd, &digit, 1);
	}
}
/*
int	main(void)
{
	int nbr = -1234;

	ft_putnbr_fd(nbr,1);
	return (0);

}*/
