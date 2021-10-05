#include "philo.h"

void    *routine(void *param)
{
    t_philo     *philo;
    t_ep        *ep;

    philo = (t_philo *)params;
    ep = philo->ep;
}

unsigned int    get_time(void)
{
    struct timeval time;

    gettimeofday(&time, NULL);
    return ((time.tv_sec * (unsigned long)1000) + (time.tv_usec / 1000));
}

int     thread_time(t_philo *philo)
{
    int i;

    i = 0;
    philo->start_time = get_time();
    printf("%lu\n", philo->start_time);
    while (i < philo->philo_num)
    {
        philo->ep[i].last_eaat = get_time();
        if (pthread_create(&philo->ep[i].tid, NULL, routine, &(philo->ep[i])))
            return (1);
    }
    return(0);
}