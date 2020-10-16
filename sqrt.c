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
		printf("Usage: sqrt input\n\n");
		exit(-1);
	}

	int input = atoi(argv[1]);
	printf("Sqrt of %d is %f\n", input, sqrt(input));
	return (0);

} // end main
