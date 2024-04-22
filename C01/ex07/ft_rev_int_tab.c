/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoffma <rohoffma@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 12:31:51 by rohoffma          #+#    #+#             */
/*   Updated: 2023/10/03 12:32:10 by rohoffma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* Uncomment for testing and add a printf 
 * function at the ft_rev_int_tab function inside the loop

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int main(void)
{
	int	array[5] = { 1, 2, 3, 4, 5 };
	int	*tab;
	int	size = 5;

	tab = &array[0] ;
	ft_rev_int_tab(tab, size);
}
*/
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	*temp_tab;

	i = 0;
	temp_tab = tab + size - 1;
	while (i < (size / 2))
	{
		temp = *(tab + i);
		*(tab + i) = *temp_tab;
		*temp_tab = temp;
		temp_tab--;
		i++;
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
