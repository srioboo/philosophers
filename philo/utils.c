# include "philo.h"

long    time_to_milisec()
{
	struct timeval	time_value;
	long			miliseconds;

	miliseconds = 0;
	if (gettimeofday(&time_value, NULL) == 0)
		miliseconds = time_value.tv_sec * 1000 + time_value.tv_usec / 1000;

	return (miliseconds);
}