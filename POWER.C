#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int num1;
	int sqr;
	int cube;
	clrscr();
	printf("Enter Number to calculate Square and Cube  = ");
	scanf("%d", &num1);
	sqr =  pow (num1, 2);
	cube = pow (num1, 3);
	printf("Square of number is = %d\nCube of number is = %d", sqr, cube);
	getch();
}
