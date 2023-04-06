 #include <stdio.h>
 int main()
 {
 	float valor_pes, medida_polegada, medida_jardas, medida_milhas;
 	printf("Informe a medida de pes: ");
 	scanf("%f", &valor_pes);
 	medida_polegada = valor_pes * 12;
 	medida_jardas = valor_pes / 3;
 	medida_milhas = valor_pes / 1760;
 	printf("Valor em polegadas: %2.2f \n", medida_polegada);
 	printf("Valor em jardas: %2.2f \n", medida_jardas);
 	printf("Valor em milhas: %2.2f", medida_milhas);
 	return 0;
 }
 