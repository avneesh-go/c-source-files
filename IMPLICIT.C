#include<stdio.h>

void main()
{
	int a;
	float b;
	clrscr();
	printf("Enter Value to Implicit Convert =");
	scanf("%d", &a);
	b = a;
	printf("\nConverted Integer Value to Float = %.2f", b);
	getch();
}
