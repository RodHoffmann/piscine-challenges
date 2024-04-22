/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoffma <rohoffma@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:45:11 by rohoffma          #+#    #+#             */
/*   Updated: 2023/10/10 19:39:07 by rohoffma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* Uncomment for testing
#include <bsd/string.h>
#include <stdio.h>
*/
char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	dest_size;

	i = 0;
	dest_size = 0;
	while (dest[dest_size])
	{
		dest_size++;
	}
	while (src[i])
	{
		dest[dest_size + i] = src[i];
		i++;
	}
	dest[dest_size + i] = '\0';
	return (dest);
}
/* Uncomment for testing
int	main(void)
{
	char	str1[] = "Hello";
	char	str2[] = "World";
	char	str3[] = "Hello";
	char	str4[] = "World";
	char	*dest;
	char	*src;
	char	*dest1;
	char	*src1;

	dest = &str1[0];
	src = &str2[0];
	dest1 = &str3[0];
	src1 = &str4[0];
	ft_strcat(dest, src);
	strcat(dest1, src1);
	printf("My Function: %s\n", dest);
	printf("Original Function: %s\n", dest1);

}
*/
