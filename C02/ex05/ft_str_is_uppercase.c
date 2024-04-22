/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoffma <rohoffma@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 16:13:26 by rohoffma          #+#    #+#             */
/*   Updated: 2023/10/04 20:08:31 by rohoffma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Uncomment for testing
#include <stdio.h>
*/
int	ft_str_is_uppercase(char *str)
{
	int	result;
	int	i;

	i = 0;
	result = 1;
	while (*(str + i) != '\0')
	{
		if ((*(str + i) >= 'A') && (*(str + i) <= 'Z'))
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
	char	str[] = "ALLOZ";
	char	str1[] = "ZAF ";
	char	str2[] = "Zad";
	char	str3[] = "";
	char	*ptr;
	char	*ptr1;
	char	*ptr2;
	char	*ptr3;
	int	test;
	int	test1;
	int	test2;
	int	test3;

	ptr = &str[0];
	ptr1 = &str1[0];
	ptr2 = &str2[0];
	ptr3 = &str3[0];
	test = ft_str_is_uppercase(ptr);
	test1 = ft_str_is_uppercase(ptr1);
	test2 = ft_str_is_uppercase(ptr2);
	test3 = ft_str_is_uppercase(ptr3);
	printf("%i\n", test);
	printf("%i\n", test1);
	printf("%i\n", test2);
	printf("%i\n", test3);
}
*/
