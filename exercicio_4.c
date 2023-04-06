#include <stdio.h>
int main()
{
	float valor_produto, reajuste;
	printf("Informe o valor do produto: ");
	scanf("%f", &valor_produto);
	reajuste = valor_produto = (valor_produto * 15/100);
	printf("O valor reajustado eh: %2.2f", reajuste);
	return 0;
}
