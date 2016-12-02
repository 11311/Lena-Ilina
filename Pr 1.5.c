#include <stdio.h>
int main()
{
	char str[80];
	int  length = 80, k = 0;
	printf("Enter the string:");
	scanf("%79s", str);
	printf("You entered a string: %s", str);
	k = (length - strlen(str)) / 2;
	system("cls");
	for (int i = 0; i <= k; i++)
		printf(" ");
	printf("%s", str);
	getch();
	return 0;
}

