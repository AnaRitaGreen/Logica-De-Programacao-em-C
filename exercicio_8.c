#include <stdio.h>
int main()
{
	float valor_deposito, valor_juros, valor_rend, valor_total;
	printf("Informe o valor do deposito: ");
	scanf("%f", &valor_deposito);
	printf("Informe o  valor da taxa de juros: ");
	scanf("%f", &valor_juros);
	valor_rend = valor_deposito * valor_juros/100;
	valor_total = valor_deposito + valor_rend;
	printf("O valor do rendimento eh: %2.2f", valor_rend);
	printf("O valor total eh: %2.2f", valor_total);
	return 0;
}