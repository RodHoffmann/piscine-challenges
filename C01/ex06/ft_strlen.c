/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoffma <rohoffma@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 11:36:59 by rohoffma          #+#    #+#             */
/*   Updated: 2023/10/04 17:44:30 by rohoffma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* Uncomment for testing
#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char	string[] = "Hello World";
	int	size;
	char	*str;

	str = &string[0];
	size = ft_strlen(str);
	printf("%i", size);
}
*/
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
