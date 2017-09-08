#include <stdio.h>
#include <stdlib.h>

unsigned int	fibonacci(int number);

int		main(int argc, char *argv[])
{
	int	number;

	if (argc == 2)
	{
		number = atoi(argv[1]);
		if (number > 48)
			printf("The number is too long!\n");
		else if (number > 0)
			printf("%d element in Fibonacci Sequence is %u.\n", number, fibonacci(number - 1));	
	}
	return (0);
}

unsigned int	fibonacci(int number)
{
	if (!number)
		return (0);
	if (number == 1)
		return (1);
	number = fibonacci(number - 1) + fibonacci(number - 2);
	return (number);
}
