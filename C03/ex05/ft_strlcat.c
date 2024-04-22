/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoffma <rohoffma@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 19:30:46 by rohoffma          #+#    #+#             */
/*   Updated: 2023/10/10 20:35:10 by rohoffma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
#include <stdio.h>
#include <bsd/string.h>
*/
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int unsigned	i;
	int unsigned	j;
	int unsigned	size_src;

	i = 0;
	j = 0;
	size_src = 0;
	while (dest[i])
		i++;
	while (src[size_src])
		size_src++;
	if (size == 0)
		return (size_src);
	while (i + j < size - 1)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	if (size + size_src > size_src + i)
		return (size_src + i);
	else
		return (size + size_src);
}
/*
int	main(void)
{
	char	dest[12] = "Hello ";
//	char	e[20] = "chao";
	char	dest1[12] = "Hello ";
//	char	b[20] = "chao";
	char	src[6] = "World";
	char	src1[6] = "World";
	char	*ptr_dest;
	char	*ptr_src;
	char	*ptr_dest1;
	char	*ptr_src1;
	int unsigned	test;
	int unsigned	test1;

//	e[0] = 'e';
//	b[0] = 'e';
	ptr_dest = &dest[0];
	ptr_src = &src[0];
	ptr_dest1 = &dest1[0];
	ptr_src1 = &src1[0];
	test = strlcat(dest, src, 5);
	test1  = 2;
	test1 = ft_strlcat(dest1, src1, 5);
	printf("Original Function: %i\n", test);
	printf("Original Function: %s\n", dest);
	printf("My Function: %i\n", test1);
	printf("My Function: %s\n", dest1);
}
*/
