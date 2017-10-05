#include <stdio.h>
#include <stdlib.h>

int 	collatz(int n, int res);

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		int	n = atoi(argv[1]);
		if (n < 1 || n > 1000)
		{
			printf("Please, type the positive integer up to 1000!\n");
			return (0);
		}
		printf("%d\n", collatz(n, 0));
	}
	else
		printf("Usage: ./collatz n\n");
	return (0);
}

int 	collatz(int n, int res)
{
	if (n == 1)
		return (res);
	else if (!(n % 2))
		return (collatz((n/2), ++res));
	else if ((n % 2))
		return (collatz((3 * n + 1), ++res));
	return (0);
}