#include <stdio.h>

int main ()
{
	char name[31]; //null terminator
	printf("Enter your name: ");
	scanf("%s", name);

	printf("Hello %s!\nYou look hella cool!!\n", name); //string is a sequence of characters
	return 0;
}

