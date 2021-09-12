#include "philo.h"

void	init(int argc, char **argv)
{
	philo.philo_num = ft_atoi(argv[1]);
	philo.time_to_die = ft_atoi(argv[2]);
	philo.time_to_eat = ft_atoi(argv[3]);
	philo.time_to_sleep = ft_atoi(argv[4]);
	if (argc == 6)
		philo.each_philo_eat_time = ft_atoi(argv[5 ]);
}