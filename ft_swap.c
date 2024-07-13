/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbozkurt <tbozkurt@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 14:51:41 by tbozkurt          #+#    #+#             */
/*   Updated: 2024/07/13 19:40:12 by tbozkurt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	taha;

	taha = *a;
	*a = *b;
	*b = taha;
}

int	main()
{
	int a = 15;
	int b = 4;
	ft_swap(&a, &b);
	printf("%d %d", a,b);
}
