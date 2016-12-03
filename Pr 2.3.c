#include <stdio.h>
int main()
{
	int str,  a= 0,b= 0, l = 0;
	char c = 0;
	printf("Enter the number of rows\n");
	scanf("%d", &str);
	a = str * 2 - 1;
	b = 1;
	l = (a - 1) / 2;
	for (int x = str; x > 0; x--)
	{
		for (int i = l; i > 0; i--)
			printf(" ");
		for (int z = b; z > 0; z--)
			printf("*");
		printf("\n");
		b = b+ 2;
		l = l - 1;
	}
	getch();
	return 0;
}