/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohoffma <rohoffma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 18:12:23 by rohoffma          #+#    #+#             */
/*   Updated: 2023/10/12 21:08:11 by rohoffma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_program_name(char *name)
{
	int	i;

	i = 0;
	while (name[i])
	{
		write(1, &name[i], 1);
		i++;
	}
	write(1, &"\n", 1);
}

int	main(int argc, char **argv)
{
	if (argc > 0)
		ft_print_program_name(argv[0]);
}
