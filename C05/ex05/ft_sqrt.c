/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoffma <rohoffma@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 13:49:07 by rohoffma          #+#    #+#             */
/*   Updated: 2023/10/12 15:01:30 by rohoffma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb >= 1)
	{
		while ((i * i) <= nb && i <= 46340)
		{
			if ((i * i) == nb)
				return (i);
			i++;
		}
	}
	return (0);
}
/*
int	main(void)
{
	int	nb;

	nb = 1;
	printf("%i", ft_sqrt(nb));
}
*/
