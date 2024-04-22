/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoffma <rohoffma@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 19:25:40 by rohoffma          #+#    #+#             */
/*   Updated: 2023/09/28 19:55:36 by rohoffma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Uncomment for test and add a printf for check with the stdio.h lib
int main(void)
{
	int c;
	int d;
	int *a;
	int *b;

	c = 1;
	d = 2;
	a = &c;
	b = &d;
	ft_swap(a, b);
}
*/
void	ft_swap(int *a, int *b)
{
	int	temp_int;

	temp_int = *a;
	*a = *b;
	*b = temp_int;
}
