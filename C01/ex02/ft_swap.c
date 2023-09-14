/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vivaccar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 21:02:17 by vivaccar          #+#    #+#             */
/*   Updated: 2023/08/30 20:01:25 by vivaccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

/*#include <stdio.h>
int	main(void)
{
	int x;
	int y;

	x = 5;
	y = 10;
	ft_swap(&x, &y);
	printf("%i\n%i", x, y);
}*/
