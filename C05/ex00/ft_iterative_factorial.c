/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoffma <rohoffma@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 17:16:22 by rohoffma          #+#    #+#             */
/*   Updated: 2023/10/16 16:13:04 by rohoffma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (result);
	else
	{
		while (nb > 0)
		{
			result *= nb;
			nb--;
		}
	}
	return (result);
}
/*
int	main(void)
{
	printf("%i\n", ft_iterative_factorial(5));
	printf("%i\n", ft_iterative_factorial(0));
	printf("%i\n", ft_iterative_factorial(-67));
}
*/
