/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoffma <rohoffma@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 13:57:36 by rohoffma          #+#    #+#             */
/*   Updated: 2023/10/10 17:43:05 by rohoffma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Write a function to validate de inputs
// Get base length
// Divide the number by the new base
// Get reminder to the rightmost digit of new number
// Divide the quotient by last division's result

#include <unistd.h>

int	check_base_sign(char *base);
int	check_duplicate(char *base);
int	validate_input(char *base);
int	get_base(char *base);

void	ft_putnbr_base(int nbr, char *base)
{
	int	mod;
	int	base_len;

	if (validate_input(base) == 0)
		return ;
	base_len = get_base(base);
	if (nbr < 0)
	{
		write(1, &"-", 1);
		nbr *= -1;
	}
	if (nbr >= base_len)
	{
		mod = nbr % base_len;
		ft_putnbr_base((nbr / base_len), base);
		write(1, &base[mod], 1);
	}
	else
		write(1, &base[nbr], 1);
}

int	validate_input(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	if ((i < 2) || check_duplicate(base) == 0
		|| check_base_sign(base) == 0)
		return (0);
	return (1);
}

int	check_duplicate(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	check_base_sign(char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		i++;
	}
	return (1);
}

int	get_base(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}
/*
int	main(void)
{
	char	str[] = "012";
	int	nbr = -42;
	char	*ptr;

	ptr = &str[0];
	ft_putnbr_base(nbr, ptr);
}*/
