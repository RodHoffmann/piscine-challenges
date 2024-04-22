/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoffma <rohoffma@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:41:17 by rohoffma          #+#    #+#             */
/*   Updated: 2023/10/17 19:16:38 by rohoffma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*array;
	int	i;

	i = 0;
	if (max <= min)
	{
		*range = NULL;
		return (0);
	}
	array = malloc((max - min) * sizeof(int));
	if (!array)
		return (-1);
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;
	}
	*range = array;
	return (i + 1);
}
/*
int	main(void)
{
	int	min;
	int	max;
	int	*ptr;
	int	i;
	int	**range;

	i = 0;
	min = 10;
	max = 8;
	ptr = &i;
	range = &ptr;
	printf("%i\n", ft_ultimate_range(range, min , max));
}
*/
