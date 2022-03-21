#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	printf("Increment and Decrement Program\nBy Avneesh J\n");
	printf("Enter Value of A and B -->\n");
	scanf("%d%d",&a,&b);
	printf("Increment-Decrement\nA=%d\tB=%d",a,b);
	printf("\nA=%d\tB=%d",++a, --b);
	printf("\nA=%d\tB=%d",a++, b--);
	printf("\nA=%d\tB=%d",a++, b--);
	printf("\nA=%d\tB=%d",++a, --b);
	getch();

}