#ifndef PHILO_H
#define PHILO_H

#include <stdlib.h>
#include <pthread.h>
#include <stdio.h>
#include <sys/time.h>
#include <unistd.h>
#include <string.h>

struct s_philo;

typedef struct s_ep
{
	int	eat_time;
	int	rfork;
	int	lfork;
	int	index;
	struct s_philo *philo;
	pthread_t tid;
}	t_ep;
typedef struct s_philo
{
	int	philo_num;
	int	time_to_die;
	int	time_to_eat;
	int	time_to_sleep;
	int	each_philo_eat_time;
	t_ep	*ep;
	pthread_mutex_t	*forks;
	pthread_mutex_t	meal;
	pthread_mutex_t	writing;
}	t_philo;

t_philo philo;

int		ft_atoi(const char *str);
int		ft_isdigit(int c);
int		init(t_philo *philo, int argc, char **argv);

#endif