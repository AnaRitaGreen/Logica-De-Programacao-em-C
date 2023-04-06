#include <stdio.h>
int main()
{
	float N1, N2, N3, result;
	printf("Informe as tres notas \n");
	scanf("%f", &N1);
	scanf("%f", &N2);
	scanf("%f", &N3);
	result = (N1 + N2 + N3)/3;
	printf("A media eh: %2.2f", result);
	return 0;
}
