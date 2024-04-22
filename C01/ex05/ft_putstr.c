/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoffma <rohoffma@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:39:34 by rohoffma          #+#    #+#             */
/*   Updated: 2023/10/04 17:40:02 by rohoffma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Uncomment for testing
#include <unistd.h>

void	ft_putstr(char *str);

int	main(void)
{
	char	string[] = "Hello";
	char	*str;

	str = &string[0];
	ft_putstr(str);
}
*/
void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}
