/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srioboo- <srioboo-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 20:16:32 by salrio            #+#    #+#             */
/*   Updated: 2025/08/01 22:17:51 by srioboo-         ###   ########.fr       */
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

typedef struct s_philosofer
{
	// TODO - add data
	// int				philo_id;
	int				fork_left;
	int				fork_right;
	int				num_eats;
	long			last_eat;
	// t_philo_data	*filo; // not needed, not used
}	t_philosofer;

typedef struct s_philo_data
{
	int philo_id;
	int	number_of_philosophers;
	int	time_to_die;
	int	time_to_eat;
	int	time_to_sleep;
	int time_to_think;
	int	number_of_times_each_philosopher_must_eat;
}	t_philo_data;



long			time_to_milisec(void);
int				validate_parameters(int ac, char **av);

int				is_number(char *str);

t_philo_data	*init_filo_data(t_philo_data *data, int ac, char **av);


// TODO - need improve
void	start_routine(t_philo_data *data);
// void	philosofer_routine(long current_time, t_philosofer *philo);
void	*philosofer_routine(void *arg);


#endif