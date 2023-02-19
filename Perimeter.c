#include <stdio.h>

main (void)
{
	printf("The Perimeter of a Rect");
	
	int length;
	int width;

	printf("Enter length: ");
	scanf("%i", &length);

	printf("Enter width: ");
	scanf("%i", &width);

	int Perimeter = (length + width) * 2;

	printf("Perimeter = ");
	scanf("%i", &Perimeter);
		
	return 0;
}
