#include <stdio.h>

int main()
{
	int radius; //The distance from the outside to center of the circle
	printf("Please enter a radius: ");
	scanf("%i", &radius); //address operator
	
	double area = 3.14159 * (radius * radius);
	printf("The area of a circle with %i radius is %f\n",radius, area);
	return 0;
}
