/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srioboo- <srioboo-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 20:16:32 by salrio            #+#    #+#             */
/*   Updated: 2025/07/27 09:52:32 by srioboo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <stdio.h>
# include <stdlib.h>
# include <pthread.h>
# include <unistd.h>
# include <sys/time.h>

# define FALSE 0
# define TRUE 1

typedef struct s_philo_data 
{
	int	number_of_philosophers;
	int	time_to_die;
	int	time_to_eat;
	int	time_to_sleep;
	int	number_of_times_each_philosopher_must_eat;
}   t_philo_data;

typedef struct s_philosofer
{
	// TODO - add data
	t_philo_data	*filo;
}	t_philosofer;

long	time_to_milisec();
int		validate_parameters(int ac, char **av);

int		is_number(char *str);

#endif