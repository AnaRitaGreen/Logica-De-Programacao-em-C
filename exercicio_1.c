#include <stdio.h>
int main ()
{
	float x, y, Result;
	printf("Informe o primeiro valor");
	scanf("%f", &x);
	printf("Informe o segundo valor");
	scanf("%f", &y);
	Result = x + y;
	printf("A soma eh: %2.2f \n", Result);
	Result = x - y;
	printf("A subtracao eh %2.2f \n", Result);
	Result = x / y;
	printf("A divisao eh: %2.2f \n", Result);
	Result = x * y;
	printf("A multiplicao eh %2.2f", Result);
	return 0;
}
