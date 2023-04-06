#include <stdio.h>
int main()
{
	float x, y, area;
	printf("Informe o valor lado menor: ");
	scanf("%f", &x);
	printf("Informe o valor lado maior: ");
	scanf("%f", &y);
	area = x * y;
	printf("A area do retangulo eh: %6.2f\n", area);
	system ("pause");
	return 0;
}
