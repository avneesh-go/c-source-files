#include<stdio.h>

void main()
{
	int b;
	float a;
	clrscr();
	printf("Enter Value to Explicit Convert = ");
	scanf("%f", &a);
	b = (int) a;
	printf("Converted Float Value to Integer = %d", b);
	getch();

}