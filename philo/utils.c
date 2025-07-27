# include "philo.h"

static int		is_digit(int c)
{
	if (c >= '0' && c <= '9')
		return (TRUE);
	return (FALSE);
}

long	time_to_milisec()
{
	struct timeval	time_value;
	long			miliseconds;

	miliseconds = 0;
	if (gettimeofday(&time_value, NULL) == 0)
		miliseconds = time_value.tv_sec * 1000 + time_value.tv_usec / 1000;

	return (miliseconds);
}

int		is_number(char *str)
{
	int p;

	p = 0;
	while(str[p])
	{
		if(is_digit(str[p]))
			return (FALSE);
		p++;
	}
	return (TRUE);
}
