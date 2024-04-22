/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoffma <rohoffma@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 21:28:02 by rohoffma          #+#    #+#             */
/*   Updated: 2023/10/09 21:36:18 by rohoffma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <bsd/string.h>
*/
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/*
int	main(void)
{
	char	str[] = "Hello  World!";
	char	*ptr;
	int	test;
	int	test1;

	ptr = &str[0];
	test = ft_strlen(ptr);
	printf("My Function: %i\n", test);
	test1 = strlen(ptr);
	printf("Original Function: %i\n", test1);
}
*/
