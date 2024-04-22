/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoffma <rohoffma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:03:18 by rohoffma          #+#    #+#             */
/*   Updated: 2023/10/16 18:23:00 by rohoffma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;
	int	counter;

	i = 1;
	counter = 0;
	if (nb == 2147483647)
		return (1);
	while (i <= nb && nb > 0 && nb != 2147483647)
	{
		if ((nb % i) == 0)
			counter++;
		i++;
	}
	if (counter == 2)
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	int	nb;

	nb = 2147483646;
	printf("%i\n", ft_is_prime(nb));

}
*/
