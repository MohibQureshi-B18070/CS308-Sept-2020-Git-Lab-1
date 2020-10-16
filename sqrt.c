/* This program computes the square root of a
positive number. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// this is a main function
// sqrt function from math library is used to compute square root
int main(int argc, char *argv[])
{

	if (argc != 2)
	{
		printf("negsupport: Usage: sqrt input\n\n");
		exit(-1);
	}

	int input = atoi(argv[1]);
	if (input >= 0)
	{
		printf("negsupport: Sqrt of %d is %f\n", input, sqrt(input));
		printf("negsupport: End of program.Exiting.\n");
	}

	else
	{
		printf("negsupport: input is not valid");
	}

	return (0);

} // end main
