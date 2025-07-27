/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srioboo- <srioboo-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 23:05:06 by srioboo-          #+#    #+#             */
/*   Updated: 2025/07/27 16:04:17 by srioboo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	main(int ac, char **av)
{
	t_philo_data *philo_data;
	
	philo_data = malloc(sizeof philo_data);
	if (ac >= 5 && ac <= 6)
	{
		if (validate_parameters(ac, av) == FALSE)
		{
			printf("Error: non numeric parameter found\n");
			return (1);
		}
		philo_data = init_filo_data(philo_data, ac, av);
		start_routine(philo_data);
	}
	else if (ac > 5)
		printf("Error: too much parameters\n");
	else
		printf("Error: not enought parameters\n");
	
	printf("TEST: time %ld\n", time_to_milisec());
	return (0);
}
