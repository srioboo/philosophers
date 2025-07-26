/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salrio <salrio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 23:05:06 by srioboo-          #+#    #+#             */
/*   Updated: 2025/07/26 22:21:06 by salrio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	main(int argc, char **argv)
{
	(void) argv;

	if (argc == 6)
		printf("6 parameters number_of_philosophers time_to_die time_to_eat time_to_sleep number_of_times_each_philosopher_must_eat\n");
	else if (argc == 5)
		printf("5 parameters number_of_philosophers time_to_die time_to_eat time_to_sleep\n");
	else
		printf("need parameters\n");
	
	
	printf("time %ld\n", time_to_milisec());


	return (0);
}
