/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scotty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 22:23:21 by scotty            #+#    #+#             */
/*   Updated: 2017/08/02 22:43:39 by scotty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*display P if int is positive and N if int is negative*/
#include <unistd.h>
/*remove before submitting code*/
#include <stdio.h>

void	ft_is_negative(int n)
{
	if ( n >= 0)
		write(1, "P", 1);
	else 
		write(1, "N", 1);
}

/* only for testing remove befoe submision */
int		main()
{
	int		scan;

	scan = 0;
	printf("Enter integer value: \n");
	scanf("%d", &scan);
	ft_is_negative(scan);
	return (0);
}
