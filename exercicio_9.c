#include <stdio.h>
int main()
{
	float preco_fabrica, percentual_lucro, percentual_impos, lucro_distrib, imposto_preco_fabrica, preco_final;
	printf("Informe o preco de fabrica: ");
	scanf("%f", &preco_fabrica);
	printf("Informe o percentual de lucro do distribuidor: ");
	scanf("%f", &percentual_lucro);
	printf("Informe o percentual de imposto: ");
	scanf("%f", &percentual_impos);
	lucro_distrib = percentual_lucro * preco_fabrica;
	imposto_preco_fabrica = percentual_impos * preco_fabrica;
	preco_final = preco_fabrica + lucro_distrib + imposto_preco_fabrica;
	printf("O lucro do distribuidor eh: %2.2f \n", lucro_distrib);
	printf("O valor do imposto eh: %2.2f \n", imposto_preco_fabrica);
	printf("O preco final eh: %2.2f \n", preco_final);
	return 0;
}
