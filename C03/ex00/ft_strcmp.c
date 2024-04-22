/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoffma <rohoffma@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:35:14 by rohoffma          #+#    #+#             */
/*   Updated: 2023/10/05 17:55:01 by rohoffma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	if (*s1 == '\0' && *s2 == '\0')
		return (0);
	else if (*s1 == '\0')
		return (*s1 - *s2);
	while (s1[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (s1[i] == '\0')
		return (s1[i] - s2[i]);
	return (0);
}
/* Uncomment for testing
int	main(void)
{
	char	str1[] = "ABC A";
	char	str2[] = "ABC AB";
	char	*s1;
	char	*s2;
	int	check;

	s1 = &str1[0];
	s2 = &str2[0];
	check = ft_strcmp(s1, s2);
	printf("%i", check);
	
}
*/
