/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scotty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 22:06:24 by scotty            #+#    #+#             */
/*   Updated: 2017/08/02 22:12:28 by scotty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* print the alphabet on a single line in reverse */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_rev(void)
{
	char	i;

	i = 'z';
	while (i >= 'a')
		ft_putchar(i--);
}

int		main()
{
	ft_print_rev();
	write(1,"\n", 1);
	return (0);
}
