/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoffma <rohoffma@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:05:58 by rohoffma          #+#    #+#             */
/*   Updated: 2023/10/10 19:46:00 by rohoffma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Uncomment for testing
#include <stdio.h>
#include <bsd/string.h>
*/
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int unsigned	i;
	int				dest_size;

	i = 0;
	dest_size = 0;
	while (dest[dest_size])
	{
		dest_size++;
	}
	while (src[i] && (i < nb))
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
	char	str2[] = "olleH";
	char	str3[] = "Hello";
	char	str4[] = "olleH";
	char	*dest;
	char	*src;
	char	*dest1;
	char	*src1;
	int unsigned	size;

	dest = &str1[0];
	src = &str2[0];
	dest1 = &str3[0];
	src1 = &str4[0];
	size = 9;
	ft_strncat(dest, src, size);
	strncat(dest1, src1, size);
	printf("My Function: %s\n", dest);
	printf("Original Function: %s\n", dest1);

}
*/
