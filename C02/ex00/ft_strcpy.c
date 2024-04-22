/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoffma <rohoffma@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:03:04 by rohoffma          #+#    #+#             */
/*   Updated: 2023/10/03 16:41:06 by rohoffma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Uncomment for testing
#include <stdio.h>
*/
char	*ft_strcpy(char *dest, char *src)
{
	char	i;

	i = 0;
	while (*src != '\0')
	{
		*(dest + i) = *src;
		i++;
		src++;
	}
	src = src - i;
	*(dest + i) = '\0';
	return (dest);
}
/* Uncomment for testing
int	main(void)
{
	char	str[] = "Hello World";
	char	str1[] = "Hi";
	char	*src;
	char	*dest;

	src = &str[0];
	dest = &str1[0];
	ft_strcpy(dest, src);
	printf("%c", *(dest + 10));
}
*/
