#include <stdio.h>

int main ()
{
	char c;
	
	printf("Enter a character: ");
	scanf("%c", &c);

	printf("The ASCII value of %c = %d\n", c, c);	

	return 0;
}
