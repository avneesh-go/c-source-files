#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	float km;
	float mile;
	float m;
	clrscr();
	printf("Enter Value in Kilometers\n-->");
	scanf("%f", &km);
	m = 1000 * km;
	mile = 0.621 * km;
	printf("Distance in Miles = %.2f Miles\nDistance in Meters = %.2f Meters", mile, m);
	getch();
}

