/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoffma <rohoffma@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 19:25:00 by rohoffma          #+#    #+#             */
/*   Updated: 2023/10/19 14:34:29 by rohoffma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

char	*ft_strcat_sep(char *dest, char *src, char *sep)
{
	int	i;
	int	j;
	int	dest_size;

	i = 0;
	dest_size = 0;
	while (dest[dest_size])
		dest_size++;
	while (src[i])
	{
		dest[dest_size + i] = src[i];
		i++;
	}
	j = 0;
	while (sep[j])
	{
		dest[dest_size + i + j] = sep[j];
		j++;
	}
	dest[dest_size + i + j] = '\0';
	return (dest);
}

int	get_total_size(char **strs, int size)
{
	int	total_size;
	int	i;
	int	j;

	total_size = 0;
	i = 0;
	j = 0;
	while (i < size)
	{
		while (strs[i][j])
		{
			total_size++;
			j++;
		}
		i++;
	}
	return (total_size);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total_size;
	int		i;
	char	*conc_strings;

	i = 0;
	if (strs == 0)
		return (0);
	total_size = get_total_size(strs, size);
	conc_strings = malloc(total_size * sizeof(char) + 1);
	if (conc_strings == 0)
		return (NULL);
	conc_strings[total_size] = 0;
	while (i < size)
	{
		if (size - i == 1)
			sep = "";
		ft_strcat_sep(conc_strings, strs[i], sep);
		i++;
	}
	return (conc_strings);
}
/*
int	main(void)
{
	char	*strings[] = {"This", "is", "my", "string"};
	char	sep[] = " ";
	char	*conc_strings;

	conc_strings = ft_strjoin(4, strings, sep);
	printf("%s", conc_strings);
}
*/
