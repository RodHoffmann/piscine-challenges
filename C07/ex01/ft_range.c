/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoffma <rohoffma@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 11:39:00 by rohoffma          #+#    #+#             */
/*   Updated: 2023/10/13 12:36:43 by rohoffma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;

	i = 0;
	if (max < min)
	{
		array = NULL;
		return (array);
	}
	array = malloc((max - min) * sizeof(int));
	if (!array)
		return (0);
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}
/*
int	main(void)
{
	int	min;
	int	max;
	int	*ptr;
	int	i;

	i = 0;
	min = 1;
	max = 10;
	ptr = ft_range(min, max);
	if (min < max)
	{	while (i < max - min)
		{
			printf("%i ", ptr[i]);
			i++;
		}
	}
	free(ptr);
}
*/
