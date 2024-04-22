/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoffma <rohoffma@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:05:12 by rohoffma          #+#    #+#             */
/*   Updated: 2023/10/04 17:07:59 by rohoffma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Uncomment for testing
#include <stdio.h>
*/
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if ((*(str + i) >= 'A') && (*(str + i) <= 'Z'))
			*(str + i) = *(str + i) + 32;
		i++;
	}
	return (str);
}
/* Uncomment for testing
int	main(void)
{
	char	str[] = "abcd  DF dg";
	char	str1[] = "\1";
	char	str2[] = " z";
	char	str3[] = "\0";
	char	*ptr;
	char	*ptr1;
	char	*ptr2;
	char	*ptr3;

	ptr = &str[0];
	ptr1 = &str1[0];
	ptr2 = &str2[0];
	ptr3 = &str3[0];
	ptr = ft_strlowcase(ptr);
	ptr1 = ft_strlowcase(ptr1);
	ptr2 = ft_strlowcase(ptr2);
	ptr3 = ft_strlowcase(ptr3);
	printf("%c\n", *ptr);
	printf("%c\n", *ptr1);
	printf("%c\n", *(ptr2 + 1));
	printf("%c\n", *ptr3);
}
*/
