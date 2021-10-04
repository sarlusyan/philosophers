#include "philo.h"

int	init(t_philo *philo, int argc, char **argv)
{
	int i;

	i = 1;
	while (i < argc)
	{
		if (ft_isdigit(ft_atoi(argv[i])))
			return (0);
		if (ft_atoi(argv[i]) < 0)
			return (0);
		i++;
	}
	philo->philo_num = ft_atoi(argv[1]);
	philo->time_to_die = ft_atoi(argv[2]);
	philo->time_to_eat = ft_atoi(argv[3]);
	philo->time_to_sleep = ft_atoi(argv[4]);
	if (argc == 6)
		philo->each_philo_eat_time = ft_atoi(argv[5 ]);
	else
		philo->each_philo_eat_time = 0;
	return(0);
} 