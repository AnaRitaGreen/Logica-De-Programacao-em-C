#include<stdio.h>
int main()
{
	float numero_dias, quantid_paga, imposto, valor_final;
	printf("Informe o numero de dias trabalhados: ");
	scanf("%f", &numero_dias);
	quantid_paga = numero_dias * 100;
	imposto = quantid_paga * 0.08/100;
	valor_final = quantid_paga - imposto;
	printf("valor a ser pago: %2.2f", &valor_final);
	return 0;
}
