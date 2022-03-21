#include<stdio.h>
#include<math.h>

void main()
{
	float lenght, width, area, peri;
	clrscr();
	printf("Enter Lenght and Width of Rectangle = ");
	scanf("%f %f", &lenght, &width);
	area = lenght * width;
	peri = 2 * (lenght + width);
	printf("Area of Rectangle is = %.2f\nPerimeter of Rectangle is = %.2f", area, peri);
	getch();
}