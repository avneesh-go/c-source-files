#include<stdio.h>
#include<conio.h>
void main()
{
	//define variables
	int year;
	clrscr();
	printf("Enter value of year = ");
	//user input
	scanf("%d", &year);
if
	//main process
	(year % 4 == 0)
	{
		//statement 1
		printf("Year %d IS leap", year);
	}
else    //decision
	{
		//statement 2
		printf("Year %d IS NOT leap", year);
	}
	//hold output window
	getch();
}