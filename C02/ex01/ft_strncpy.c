/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoffma <rohoffma@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:59:59 by rohoffma          #+#    #+#             */
/*   Updated: 2023/10/04 19:50:46 by rohoffma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Uncomment for testing
#include <stdio.h>
*/
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int unsigned	i;

	i = 0;
	while ((i < n) && (*(src + i) != '\0'))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
/* Uncomment for testing
int	main(void)
{
	char	str[] = "Hello World";
	char	str1[] = "Hi!";
	int	unsigned	i;
	int	unsigned	size;
	char	*src;
	char	*dest;

	src = &str[0];
	dest = &str1[1];
	size = 14;
	i = 0;
	ft_strncpy(dest, src, size);
	while (i < size)
	{
		printf("%c", *(dest + i));
		i++;
	}
}
*/
