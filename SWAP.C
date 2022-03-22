#include<stdio.h>
#include<math.h>
void main()
{
	//define variables
	int a;
	int b;
	int temp;
	clrscr();
	printf("Enter values of A and B = ");
	//take values of a and b
	scanf("%d%d", &a, &b);
	printf("Before swapping Values \nA=%d\nB=%d", a, b);
	//main process (swapping)
	temp = a;
	a = b;
	b = temp;
	printf("\nAfter swapping values \nA=%d\nB=%d", a, b);
	getch();
	//done
}
