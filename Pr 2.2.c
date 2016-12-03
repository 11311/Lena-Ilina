#include <stdio.h>
#include <stdlib.h>
int main()
{
	int z, N, c;
	srand(time(NULL));
	z = 1 + rand() % 100;
	N = 10;
	for (int i = 0; N>0; i++)
	{
		N--;
		printf("Enter a number from 1 to 100:");
		scanf("%d", &c);
		if (z == c)
		{
			printf("You guessed!:\n");
			break;
		}
		if (z > c)
			printf("Your number is less than\n");
		else
			printf("Your number is greater than\n");
	}
	if (N = 0)
		printf("You could not guess the number");
	getch();
	return(0);
}