/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoffma <rohoffma@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 12:40:49 by rohoffma          #+#    #+#             */
/*   Updated: 2023/10/04 17:46:22 by rohoffma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Uncomment for testing and add a printf 
 * function at the ft_rev_int_tab function inside the loop

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int main(void)
{
	int	array[6] = { 2, 5, 3, 1, 7, 0 };
	int	*tab;
	int	size = 6;

	tab = &array[0] ;
	ft_sort_int_tab(tab, size);
}
*/
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;
	int	*temp_tab;

	j = 0;
	temp_tab = tab;
	while (j < (size - 1))
	{
		i = j + 1;
		while (i <= (size - 1))
		{
			if (*(temp_tab + j) > *(temp_tab + i))
			{
				temp = *(temp_tab + j);
				*(temp_tab + j) = *(temp_tab + i);
				*(temp_tab + i) = temp;
			}
			i++;
		}
		j++;
	}
}
/* Uncomment for testing and change the end of the function definition
   i = 0;
	while (i < size)
	{
		printf("%d ", *tab);
		tab++;
		i++;
	}
*/
