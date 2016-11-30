#include <stdio.h>
 int main()
{
	int hour, minute, second;
	printf("Enter the current time in the format HH:MM:SS\n ");
	printf("HH:");
	scanf("%d", &hour);
	printf("MM:");
	scanf("%d", &minute);
	printf("SS");
	scanf("%d", &second);
	printf("Time: %d:%d:%d\n", hour, minute, second);
	if (hour >= 17 && hour < 23)
		printf("Good evening!");
	else if (hour >= 4 && hour < 12)
		printf("Good morning!");
	else if (hour >= 12 && hour < 17)
		printf("Good afternoon!");
	else
		printf("Good nigth!"); 
	getch();
	return(0);
	
}