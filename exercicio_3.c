#include <stdio.h>
int main ()
{
	float ano_nasc, ano_atual, result;
	printf("Informe a ano de nascimento:");
	scanf("%f", &ano_nasc);
	printf("Informe a data atual:");
	scanf("%f", &ano_atual);
	result = ano_atual - ano_nasc;
	printf("A idade atual eh: %2.0f \n", result);
	result = 2050 - ano_nasc;
	printf("a idade em 2050 sera: %2.0f \n", result);
	return 0;
}	
