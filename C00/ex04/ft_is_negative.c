/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoffma <rohoffma@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 17:38:55 by rohoffma          #+#    #+#             */
/*   Updated: 2023/09/27 17:52:00 by rohoffma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/* Uncomment this line and delete the end of the comment along with this line
void	ft_is_negative(int n);

int	main(void)
{
	ft_is_negative(3);
	ft_is_negative(-1);
	ft_is_negative(0);
}
*/
void	ft_is_negative(int n)
{
	if (n >= 0)
	{
		write(1, &"P", 1);
	}
	else
	{
		write(1, &"N", 1);
	}
}
