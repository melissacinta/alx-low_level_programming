#include "3-calc.h"

/**
 * main - main entry point to the program
 * @argc: num of arguments
 * @argv: array of arguments
 * Return: 0 if successful other with 98, 99, 100
 */

int main(int argc, char *argv[])
{
	/* Declare variables */
	int arg1, arg2, result;
	char operator;
	int (*func)(int, int);

	/* if age is not equal tp 4 print error and exit */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	/* converting to interging using standard library */
	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);
	/**
	 * call get_op_func with the operator
	 * and return corressponding function
	 */
	func = get_op_func(argv[2]);
	/* print error and exit if function fails or returns null */
	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	operator = *argv[2];
	/* check to ensure there is no division by o */
	if ((operator == '/' || operator == '%') && arg2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	/* call the returned function and assign to result */
	result = func(arg1, arg2);
	/* finially print result */
	printf("%d\n", result);

	return (0);
}
