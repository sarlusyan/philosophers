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
	printf("%d\n", philo.philo_num);
	i = 0;
	while (i < philo.philo-philo_num)
	{
		i++;
		pthread_craete()
	}
}
 