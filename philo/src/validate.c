/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srioboo- <srioboo-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 09:30:56 by srioboo-          #+#    #+#             */
/*   Updated: 2025/08/01 15:08:50 by srioboo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	validate_parameters(int ac, char **av)
{
	int				counter;

	counter = 1;
	while (counter < ac)
	{
		if (is_number(av[counter]))
			return (FALSE);
		counter++;
	}
	return (TRUE);
}
