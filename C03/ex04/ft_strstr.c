/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoffma <rohoffma@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:10:05 by rohoffma          #+#    #+#             */
/*   Updated: 2023/10/10 20:09:36 by rohoffma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <bsd/string.h>
*/
char	*find_sub_string(int j, int size, char *str, char *to_find)
{
	int	i;

	i = 0;
	while (to_find[size])
		size++;
	while (str[i])
	{
		while (to_find[j])
		{
			if (to_find[j] == str[i + j])
			{
				j++;
				if (j == size)
					return (str + i);
			}
			else
			{
				j = 0;
				break ;
			}
		}
		i++;
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	j;
	int	size;

	j = 0;
	size = 0;
	return (find_sub_string(j, size, str, to_find));
}
/*
int	main(void)
{
	char	string[] = "Hello World";
	char	sub[] = "wor";
	char	string1[] = "Hello World";
	char	sub1[] = "wor";
	char	*str;
	char	*find_sub;
	char	*str1;
	char	*find_sub1;
	char	*check;
	char	*check1;

	str = &string[0];
	find_sub = &sub[0];
	str1 = &string1[0];
	find_sub1 = &sub1[0];
	check = ft_strstr(str, find_sub);
	printf("My Function: %s\n", check);
	check1 = strstr(str1, find_sub1);
	printf("Original Function: %s\n", check1);

}
*/
