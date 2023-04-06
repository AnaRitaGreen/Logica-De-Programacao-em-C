#include <stdio.h>
int main() 
{
	float valor_produto, percentual_desc, valor_desc, preco_novo;
	printf("Informe o valor do produto: ");
	scanf("%f", &valor_produto);
	printf("Informe o percentual de desconto: ");
	scanf("%f", &percentual_desc);
	valor_desc = valor_produto * percentual_desc / 100;
	preco_novo = valor_produto - valor_desc;
	printf("Valor do desconto eh: %2.0f \n", valor_desc);
	printf("preco novo eh: %2.0f", preco_novo);
	return 0;
}
