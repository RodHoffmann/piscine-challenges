/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoffma <rohoffma@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:41:39 by rohoffma          #+#    #+#             */
/*   Updated: 2023/09/28 09:07:50 by rohoffma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/* Uncoment this line and delete it along with the end of comment for testing
void	ft_print_reverse_alphabet(void);

int	main(void)
{
	ft_print_reverse_alphabet();
}
*/
void	ft_print_reverse_alphabet(void)
{
	char	*rev_alpha;

	rev_alpha = "zyxwvutsrqponmlkjihgfedcba";
	write(1, rev_alpha, 26);
}
