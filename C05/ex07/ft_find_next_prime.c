/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoffma <rohoffma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:45:00 by rohoffma          #+#    #+#             */
/*   Updated: 2023/10/16 20:40:16 by rohoffma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	check_prime(int nb, int i)
{
	if (nb == 2 || nb == 3 || nb == 2147483647)
		return (nb);
	while (i * i <= nb)
	{
		if (nb % i == 0 || nb % (i + 2))
			return (0);
		i++;
	}
	return (nb);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	if (nb == 2 || nb == 3 || nb == 2147483647)
		return (nb);
	else if (nb <= 1)
		return (2);
	while (nb >= 0 && nb <= 2147483647)
	{
		i = 1;
		if (check_prime(nb, 5))
			return (nb);
		nb++;
	}
	return (0);
}
/*
int	main(void)
{
	printf("%i\n", ft_find_next_prime(2147483647));
	printf("%i\n", ft_find_next_prime(2147483630));
	printf("%i\n", ft_find_next_prime(0));
	printf("%i\n", ft_find_next_prime(-1));
	printf("%i\n", ft_find_next_prime(1));
}
*/
