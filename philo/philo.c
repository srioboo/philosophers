/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srioboo- <srioboo-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 23:05:06 by srioboo-          #+#    #+#             */
/*   Updated: 2025/07/27 13:16:33 by srioboo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	main(int ac, char **av)
{
	(void) av;

	if (ac >= 5 && ac <= 6)
	{
		if (validate_parameters(ac, av) == FALSE)
			printf("Error: non numeric parameter found\n");
		printf("6 parameters number_of_philosophers time_to_die time_to_eat time_to_sleep number_of_times_each_philosopher_must_eat\n");
	}
	else if (ac > 5)
		printf("Error: too much parameters\n");
	else
		printf("Error: not enought parameters\n");
	
	printf("TEST: time %ld\n", time_to_milisec());
	return (0);
}
