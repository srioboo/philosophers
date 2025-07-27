/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialization.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srioboo- <srioboo-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 13:23:35 by srioboo-          #+#    #+#             */
/*   Updated: 2025/07/27 13:34:18 by srioboo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

t_philo_data	*init_filo_data(t_philo_data *data, int ac, char **av)
{
	printf("%d parameters  time_to_die time_to_eat time_to_sleep number_of_times_each_philosopher_must_eat\n", ac);
	data->number_of_philosophers = atoi(av[1]);
	data->time_to_die = atoi(av[2]);
	data->time_to_eat = atoi(av[3]);
	data->time_to_sleep = atoi(av[4]);
	if (ac == 6)
		data->number_of_times_each_philosopher_must_eat = atoi(av[5]);

	printf("review data: %d %d\n", data->number_of_philosophers, data->time_to_die);
	return (data);
}
