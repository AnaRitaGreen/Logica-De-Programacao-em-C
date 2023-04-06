#include <stdio.h>
int main()
{
	float salario_base, salario_receber;
	printf("Informe o salario base: ");
	scanf("%f", &salario_base);
	salario_receber = salario_base + 50 - (salario_base * 7/100);
	printf("Salario a receber eh: %2.2f", salario_receber);
	return 0;	
}
