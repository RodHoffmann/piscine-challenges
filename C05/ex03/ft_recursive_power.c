/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoffma <rohoffma@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 13:03:41 by rohoffma          #+#    #+#             */
/*   Updated: 2023/10/12 13:21:06 by rohoffma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	return (nb * (ft_recursive_power(nb, power - 1)));
}
/*
int	main(void)
{
	int	nb;
	int	power;

	nb = 7;
	power = 2;

	printf("%i", ft_recursive_power(nb, power));
}
*/
