#include<stdio.h>
#include<math.h>

void main()
{
	float sph_area, sph_vol, cir_area, cir_circum;
	const float pi = 3.14;
	int r;
	clrscr();
	printf("Enter value for radius\n --> ");
	scanf("%d", &r);
	sph_area = 4 * pi * r * r;
	sph_vol = (4/3) * pi * r * r;
	cir_area = pi * r * r;
	cir_circum = 2 * pi * r;
	printf("Sphere :\nArea of Sphere = %.3f \nVolume = %.3f\nCircle :\nArea of Circle = %.3f\nCircumference of circle = %.3f", sph_area, sph_vol, cir_area, cir_circum);
	getch();
}