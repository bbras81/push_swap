/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunmigu <brunmigu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 10:16:48 by brunmigu          #+#    #+#             */
/*   Updated: 2025/07/17 12:53:19 by brunmigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/pushswap.h"

void check_args(int argc, char **argv)
{
    (void)argc;
    int i;
    int counter;
    char **arguments;
    
    i = 0;
    counter = 1;
    while (counter != argc) {
        arguments = ft_split(argv[counter], ' ');
        counter++;
    }
    while (arguments[i]) {
        ft_printf("%s\n", arguments[i]);
        i++;        
    }
}
int main(int argc, char **argv)
{
    (void)argv;
    if (argc < 2)
        return EXIT_FAILURE;
    check_args(argc, argv);
    
    
    return EXIT_SUCCESS;
}