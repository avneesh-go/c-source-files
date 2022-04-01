#include <stdio.h>
#include <conio.h>

int main()
{
	char op;
	double first, second;
	clrscr();
	printf("Calculator made using switch-case statements by Avneesh\n");
	printf("Enter a choice\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
	scanf("%c", &op);
	printf("Enter two operands: ");
	scanf("%lf %lf", &first, &second);

switch (op)
	{
	case '1':
	printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
	break;
	case '2':
	printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
	break;
	case '3':
	printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
	break;
	case '4':
	printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
	break;
	// operator doesn't match any case constant
	default:
	printf("Error ! operator is not correct");
	}
	getch();
return 0;
}