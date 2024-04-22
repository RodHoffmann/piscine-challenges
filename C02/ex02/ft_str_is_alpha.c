/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoffma <rohoffma@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:35:53 by rohoffma          #+#    #+#             */
/*   Updated: 2023/10/04 20:04:55 by rohoffma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* Uncomment for testing
#include <stdio.h>
*/
int	ft_str_is_alpha(char *str)
{
	int	result;
	int	i;

	i = 0;
	result = 1;
	while (*(str + i) != '\0')
	{
		if (((*(str + i) >= 'A') && (*(str + i) <= 'Z'))
			|| ((*(str + i) >= 'a') && (*(str + i) <= 'z')))
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
	char	str[] = "aHelloHzZ";
	char	str1[] = "";
	char	str2[] = "ello3";
	char	*ptr;
	char	*ptr1;
	char	*ptr2;
	int	test;
	int	test1;
	int	test2;

	ptr = &str[0];
	ptr1 = &str1[0];
	ptr2 = &str2[0];
	test = ft_str_is_alpha(ptr);
	test1 = ft_str_is_alpha(ptr1);
	test2 = ft_str_is_alpha(ptr2);
	printf("%i\n", test);
	printf("%i\n", test1);
	printf("%i\n", test2);
}
*/
