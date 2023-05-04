#include <stdio.h>

int main()
{
	char operator;
	double a;
	double b;
	double result;

	printf ("введите выражение:");
	scanf ("%lf %c %lf", &a, &operator, &b);

	switch(operator) {
		case '+':
			result = a + b;
			break;
		case '-':
			result = a - b;
			break;
		case '*':
			result = a * b;
			break;
		case '/':
			if ( b == 0) {
				printf("на ноль делить нельзя!\n");
				return 1;
				}
				result = a / b;
			break;
		default:
			printf("Ошибка\n");
			return 1;
		}
		printf("%lf %c %lf = %lf\n", a, operator, b, result);
	return 0;
}
