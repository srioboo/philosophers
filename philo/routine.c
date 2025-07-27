/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   routine.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srioboo- <srioboo-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 15:44:16 by srioboo-          #+#    #+#             */
/*   Updated: 2025/07/27 16:05:17 by srioboo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	start_routine(t_philo_data *data)
{
	printf("TEST %d\n", data->number_of_philosophers);
}

void	philosofer_routine(long current_time, t_philosofer *philo)
{
	printf("%ld %d has taken a fork\n", current_time, philo->philo_id);
	printf("%ld %d is eating\n", current_time, philo->philo_id);
	printf("%ld %d is sleeping\n", current_time, philo->philo_id);
	printf("%ld %d is thinking\n", current_time, philo->philo_id);

	// A message announcing a philosopher’s death must be displayed within 10 ms of their actual death.
	// IF philosofer dead THEN sleep 10 ms and print
	printf("%ld %d died\n", current_time, philo->philo_id);
}
