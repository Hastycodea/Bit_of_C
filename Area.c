#include <stdio.h>

int main ()
{
	int radius; // outside to center of the circle
	
	printf("Enter a radius: ");
	scanf("%i", &radius); // address-of operator
	
	double area = 3.14 * (radius * radius); 

	printf("The area of the circle with %i radius is %f\n", radius, area);
	return 0;


}
