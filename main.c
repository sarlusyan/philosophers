#include "philo.h"

int main(int argc, char **argv)
{
	t_philo	philo;
	int	i;

	if (argc < 5 || argc > 6)
	{
		printf("ERROR");
		return 0;
	}
	init(&philo, argc, argv);
	ft_init(&philo);
	printf("%d\n", philo.philo_num);
	return(0);
}
 