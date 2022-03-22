#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int x = 7;
	int y = -3;
	int z;
	clrscr();
	z = ++x + y-- - ++y - x-- - x-- - ++y - x--;
	printf("Output for statement is = [%d]", z);
	getch();
}
