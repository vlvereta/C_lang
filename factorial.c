#include <stdio.h>
#include <stdlib.h>

int 	factorial(int n);

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		int	n = atoi(argv[1]);
		if (n < 0 || n > 12)
		{
			printf("Please, type the positive integer up to 12!\n");
			return (0);
		}
		printf("%d\n", factorial(n));
	}
	else
		printf("Usage: ./factorial n\n");
	return (0);
}

int 	factorial(int n)
{
	if (n == 0)
		return (1);
	else 
		return (n * factorial(n - 1));
	return (0);
}
