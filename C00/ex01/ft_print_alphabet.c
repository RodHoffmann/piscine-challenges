/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoffma <rohoffma@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 13:38:21 by rohoffma          #+#    #+#             */
/*   Updated: 2023/09/28 11:33:17 by rohoffma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
void	ft_print_alphabet(void);

int	main(void)
{
	ft_print_alphabet();
}
*/
void	ft_print_alphabet(void)
{
	char	*alpha;

	alpha = "abcdefghijklmnopqrstuvwxyz";
	write(1, alpha, 26);
}
