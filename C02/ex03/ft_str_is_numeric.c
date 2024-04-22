/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoffma <rohoffma@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:04:23 by rohoffma          #+#    #+#             */
/*   Updated: 2023/10/04 20:04:30 by rohoffma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
// Uncomment for testing
#include <stdio.h>
*/
int	ft_str_is_numeric(char *str)
{
	int	result;
	int	i;

	i = 0;
	result = 1;
	while (*(str + i) != '\0')
	{
		if ((*(str + i) >= '0') && (*(str + i) <= '9'))
		{
			result = 1;
		}
		else
		{
			result = 0;
			break ;
		}
		i++;
	}
	return (result);
}
/* Uncomment for testing
int	main(void)
{
	char	str[] = "0159";
	char	str1[] = "13f5";
	char	str2[] = "";
	char	*ptr;
	char	*ptr1;
	char	*ptr2;
	int	test;
	int	test1;
	int	test2;

	ptr = &str[0];
	ptr1 = &str1[0];
	ptr2 = &str2[0];
	test = ft_str_is_numeric(ptr);
	test1 = ft_str_is_numeric(ptr1);
	test2 = ft_str_is_numeric(ptr2);
	printf("%i\n", test);
	printf("%i\n", test1);
	printf("%i\n", test2);
}
*/
