#include <stdio.h>
int main()
{
	float angle;
	char symbol;
	const float pi = 3.14;
	printf("Enter the angle value:\n");
	scanf("%f%c", &angle, &symbol);
	if (symbol == 'D' || symbol == 'd')
	 {
		printf("%f%D=", angle);
		angle = (angle*pi) / 180;
		printf("%fR", angle);
	 }
	     else if (symbol == 'R' || symbol == 'r')
	     {
			 printf("%f%R=", angle);
			 angle = (angle * 180) / pi;
			 printf("%fD", angle);
	     }
		 else printf("Error!");
		 getch();
		 return(0);
}