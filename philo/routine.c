/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   routine.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srioboo- <srioboo-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 15:44:16 by srioboo-          #+#    #+#             */
/*   Updated: 2025/08/01 22:24:59 by srioboo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

// static void *dummy_function(void *arg)
// {
// 	int id = *(int*)arg;

// 	printf("lauched thread %d\n", id);
// 	return NULL;
// }

void	start_routine(t_philo_data *philo_data)
{
	pthread_t philo_process[philo_data->number_of_philosophers];
	//int ids[3] = {1, 2, 3};
	int counter;
	// t_philosofer philosofer;

	counter = 1; // philo_data->number_of_philosophers;
	
	printf("TEST %d\n", philo_data->number_of_philosophers);

	// t_philosofer *philos = (t_philosofer *)malloc(sizeof(t_philosofer) * philo_data->number_of_philosophers);
	// philo_data->philos = philos;
	//int test = 1;
	while(1 != 1)
	{
		while(counter <= philo_data->number_of_philosophers)
		{
			philo_data->philo_id = counter;
			// philo_data->philo->
			printf("TODO - do here the thread creation\n");
			if (pthread_create(&philo_process[counter], NULL, philosofer_routine, philo_data) != 0)//&ids[counter]) != 0)
			{
				perror("Error creating thread");	
			}
			counter++;
		}
	}
	
	// Esperar a que terminen todos los hilos
	//int test = philo_data->number_of_philosophers;
    // while(test > 0) {
    //      if(pthread_join(&philo_process[test], NULL) != 0) {
    //          perror("Error al esperar hilo");
    //          exit(1);
    //      }
	// 	test--;
    // }
}

void	*philosofer_routine(void *arg) //(long current_time, t_philosofer *philo)
{
	t_philo_data *philo = (t_philo_data *)arg;
	long current_time = time_to_milisec();
	// philo->philo_id = arg->

	// t_philosofer phil = philo->philos[philo->philo_id];
	//int count = 0;
	//while(count < 0)
	//{
		printf("%ld %d has taken a fork\n", current_time, philo->philo_id);
		printf("%ld %d is eating\n", current_time, philo->philo_id);
		printf("%ld %d is sleeping\n", current_time, philo->philo_id);
		printf("%ld %d is thinking\n", current_time, philo->philo_id);
	
		// A message announcing a philosopher’s death must be displayed within 10 ms of their actual death.
		// IF philosofer dead THEN sleep 10 ms and print
		printf("%ld %d died\n", current_time, philo->philo_id);
	//	count++;
	//}	
	return NULL;
}
