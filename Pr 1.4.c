#include <stdio.h>
int main()
{
	const float duim_1= 2.54;
	const fut_1 =12*duim_1;
	int duim, fut;
	float higth;
	printf("Enter your weight in feet and inches:\n");
	scanf("%d%d", duim, fut);
	higth = (duim*duim_1 + fut*fut_1);
	printf("Your hight in european system: %fsm", higth);
	getch();
	return 0;
}

