/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoffma <rohoffma@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 16:19:02 by rohoffma          #+#    #+#             */
/*   Updated: 2023/09/27 17:35:29 by rohoffma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/* Uncomment and delete this line for testing purposes
void	ft_print_numbers(void);

int	main(void)
{
	ft_print_numbers();
}
*/
void	ft_print_numbers(void)
{
	char	i;

	i = 48;
	while (i < 58)
	{
		write(1, &i, 1);
		i++;
	}
}
