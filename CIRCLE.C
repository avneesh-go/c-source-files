//program to calculate area of triangle
#include<stdio.h>
#include<conio.h>
void main()
{
	int area,h,b;
	clrscr();
	printf("Enter Base and Height\n");
	scanf("%d%d",&h,&b);
	area = 0.5 * b * h;
	printf("Area of Triangle is = %d",area);
	getch();
}