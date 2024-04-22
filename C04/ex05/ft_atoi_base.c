/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoffma <rohoffma@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 18:22:23 by rohoffma          #+#    #+#             */
/*   Updated: 2023/10/11 14:30:09 by rohoffma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
//
char	*ft_atoi(char *str, char *base);
void	base_into_array(char *array, char *str, char *base, int i, int j);
int	is_valid_sign(char *base);
int	is_valid(char *base);
int	ft_putnbr_base(char *nbr, char *base, int base_len, int i, int j);
// In main function
// Call ft_atoi
// 

int	ft_atoi_base(char *str, char *base);
{
	int	base_len;
	char	*nbr;
	
	while (base[base_len])
		base_len++;
	if (is_valid_sign(base) == 0 || is_valid(base) == 0)
		return (0);
	nbr = ft_atoi(str, base);
	ft_putnbr_base(nbr, base, base_len, 0, 0);
}

int	ft_putnbr_base(char *nbr, char *base, int base_len, int i, int j)
{
	int	sign;
	int	result;
	int	num_len;
	int	k;
	int	partial_result;

	sign = 1;
	k = 0;
	result = 0;
	num_len == 0;
	while (nbr[num_len])
		num_len++;
	if (nbr[0] == '-')
		sign == -1;
		i++;
	while (nbr[i])
	{
		while (base[j])
		{
			if (base[j] == nbr[i])
			{
				k == num_len - i - 1;
				result = result + (j * base_len)
				while (k >= 0)
				{
					partial_result *= base_len;
					k--;
				}
				result += partial_result;
			}
		}
		i++;
	}
	return (result);
}

int	is_valid(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (base[i])
		i++;
	if (i < 2)
		return (0);
	else if
	{
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
	}	
}

int	is_valid_sign(char *base)
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

char	*ft_atoi(char *str, char *base)
{
	int	i;
	char	*result;
	int	sign;
	int	j;

	sign = 1;
	result = &"";
	i = 0;
	j = 0;
	while ((str[i] == ' ') || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	if (sign < 0)
		result[0] = '-';
	base_into_array(result, str, base, i, j);
	return (result);
}

void	base_into_array(char *array, char *str, char *base, int i, int j)
{
	int	k;
	int	len;

	len = 0;
	if (array[0] = '-')
		j++;
	while (base[len])
		len++;
	while (str[i])
	{
		k = 0;
		while (base[k])
		{
			if (str[i] == base[k])
			{
				array[j] == str[i];
				j++;
				break ;
			}
		}
		if (k == len)
			break ;
	}
}
//
int	main(void)
{
	char	s[] = "++---+fg";
	char	base = "fg
	int	result;
	char	*ptr;
	char	*ptr_base;

	ptr = &s[0];
	result = ft_atoi_base(ptr, ptr_base);
	printf("%i", result);
}
*/
