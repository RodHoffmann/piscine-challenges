/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoffma <rohoffma@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 16:18:12 by rohoffma          #+#    #+#             */
/*   Updated: 2023/10/04 16:41:32 by rohoffma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Uncomment for testing
#include <stdio.h>
*/
int	ft_str_is_printable(char *str)
{
	int	result;
	int	i;

	i = 0;
	result = 1;
	while (*(str + i) != '\0')
	{
		if ((*(str + i) >= ' ') && (*(str + i) <= '~'))
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
	char	str[] = "\1";
	char	str1[] = "\0";
	char	str2[] = " ";
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
	test = ft_str_is_printable(ptr);
	test1 = ft_str_is_printable(ptr1);
	test2 = ft_str_is_printable(ptr2);
	test3 = ft_str_is_printable(ptr3);
	printf("%i\n", test);
	printf("%i\n", test1);
	printf("%i\n", test2);
	printf("%i\n", test3);
}
*/
