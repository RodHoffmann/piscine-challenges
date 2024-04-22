/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoffma <rohoffma@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 11:09:36 by rohoffma          #+#    #+#             */
/*   Updated: 2023/10/13 11:35:53 by rohoffma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		size;
	int		i;
	char	*dest;

	size = 0;
	i = 0;
	while (src[size])
		size++;
	dest = malloc(size * sizeof(char));
	if (dest == NULL)
		return (NULL);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	src[] = "Hello";
	char	*ptr_src;
	char	src1[] = "Hello";
	char	*ptr_src1;

	ptr_src = &src[0];
	ptr_src1 = &src1[0];
	printf("My function: %s\n", ft_strdup(ptr_src));
	printf("Built-in function: %s\n", strdup(ptr_src1));
}
*/
