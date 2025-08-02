/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srioboo- <srioboo-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 15:08:14 by srioboo-          #+#    #+#             */
/*   Updated: 2025/08/01 15:08:15 by srioboo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

static int	is_digit(int c)
{
	if (c >= '0' && c <= '9')
		return (TRUE);
	return (FALSE);
}

long	time_to_milisec(void)
{
	struct timeval	time_value;
	long			miliseconds;

	miliseconds = 0;
	if (gettimeofday(&time_value, NULL) == 0)
		miliseconds = time_value.tv_sec * 1000 + time_value.tv_usec / 1000;

	return (miliseconds);
}

int	is_number(char *str)
{
	int	p;

	p = 0;
	while (str[p])
	{
		if (is_digit(str[p]))
			return (FALSE);
		p++;
	}
	return (TRUE);
}
