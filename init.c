#include "philo.h"

static int      mutex_init(t_philo *philo)
{
    int i;

    i = 0;
    while (i < philo->philo_num)
    {
        if (pthread_mutex_init(&(philo->forks[i]), NULL))
            return(1);
        i++;
    }
    pthread_mutex_init(&philo->meal, NULL);
    pthread_mutex_init(&philo->writing, NULL);
    return(0);
}

static  void    philo_init(t_philo *philo)
{
    int i;

    i = 0;
    while (i < philo->philo_num)
    {
        philo->ep[i].index = i + 1;
        philo->ep[i].lfork = i;
        philo->ep[i].rfork = (i + 1) % philo->philo_num;
        philo->ep[i].philo = philo;
        i++;
    }
}

int ft_init(t_philo *philo)
{
    philo->ep = malloc(sizeof(t_ep) * philo->philo_num);
    if (!philo->ep)
        return(0);
    philo->forks = malloc(sizeof(pthread_mutex_t) * philo->philo_num);
    if(!philo->forks)
        return(0);
    return(1);
}