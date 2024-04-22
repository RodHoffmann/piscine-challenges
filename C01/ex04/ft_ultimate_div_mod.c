/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoffma <rohoffma@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 10:10:53 by rohoffma          #+#    #+#             */
/*   Updated: 2023/09/29 10:44:47 by rohoffma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* Uncomment and add printf to the requested function to test
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int*b);

int main(void)
{
	int c;
	int d;
	int *a;
	int *b;

	c = 10;
	d = 3;
	a = &c;
	b = &d;
	ft_ultimate_div_mod(a, b);
}
*/
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
