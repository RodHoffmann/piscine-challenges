/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoffma <rohoffma@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 11:39:02 by rohoffma          #+#    #+#             */
/*   Updated: 2023/10/10 19:30:41 by rohoffma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int unsigned	i;

	i = 0;
	if ((*s1 == '\0' && *s2 == '\0') || n == 0)
		return (0);
	else if (*s1 == '\0')
		return (*s1 - *s2);
	while (s1[i] && (i < n))
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
	char	str1[] = "";
	char	str2[] = "def";
	char	*s1;
	char	*s2;
	int	check;
	int unsigned	size;

	s1 = &str1[0];
	s2 = &str2[0];
	size = 0;
	check = ft_strncmp(s1, s2, size);
	printf("%i", check);
	
}
*/
