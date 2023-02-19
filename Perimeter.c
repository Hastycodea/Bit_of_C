#include <stdio.h>

int main (void)
{
	// Perimeter of a Rectangle
	
	int length;
	int width;

	printf("Enter length: ");
	scanf("%i", &length);

	printf("Enter width: ");
	scanf("%i", &width);

	int Perimeter = (length + width) * 2;

	printf("Perimeter = %i\n", Perimeter);
	
		
	return 0;
}
