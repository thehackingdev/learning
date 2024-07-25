#include <stdio.h>

int main()
{
	
	printf("How many dogs do you have?");
	double dogs;

	scanf("%lf", &dogs);
	printf("%f\n%e\n%g\n", dogs, dogs, dogs);
	
	/*Conversion Characters
	.....................

	%f - Decimal notation
	%e - Scientific notation
	%g - computer decides

	*/

	return 0;
}
