/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scotty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 22:14:19 by scotty            #+#    #+#             */
/*   Updated: 2017/08/02 22:21:04 by scotty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*list the numbers on the standard doutput*/

#include <unistd.h>

void	ft_print_numbers(void)
{
	write(1, "0123456789", 10);
}

int		main()
{
	ft_print_numbers();
	return (0);
}
