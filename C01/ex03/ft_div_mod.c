/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fit_div_mod.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoffma <rohoffma@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 19:59:21 by rohoffma          #+#    #+#             */
/*   Updated: 2023/09/28 20:25:21 by rohoffma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Uncomment and add a print function to test
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int main(void)
{
	int a;
	int b;
	int c;
	int d;
	int *div;
	int *mod;

	a = 62;
	b = 3;
	c = 0;
	d = 0;
	div = &c;
	mod = &d;
	ft_div_mod(a, b, div, mod);
}
*/
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
