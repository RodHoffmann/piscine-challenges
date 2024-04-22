/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoffma <rohoffma@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 20:54:57 by rohoffma          #+#    #+#             */
/*   Updated: 2023/10/12 21:43:35 by rohoffma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

void	sort_array(char **array)
{
	int		i;
	int		j;
	char	*temp_array;

	j = 1;
	while (array[j])
	{
		i = j + 1;
		while (array[i])
		{
			if (ft_strcmp(array[j], array[i]) > 0)
			{
				temp_array = array[i];
				array[i] = array[j];
				array[j] = temp_array;
			}
			i++;
		}
		j++;
	}
}

void	ft_sort_params(char **argv)
{
	int	i;
	int	j;

	i = 1;
	sort_array(argv);
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, &"\n", 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc > 1)
		ft_sort_params(argv);
}
