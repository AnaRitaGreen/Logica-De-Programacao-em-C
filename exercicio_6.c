#include <stdio.h>
int main()
{
    float salario_base, salario_receber;
    printf("Informe o salario base: ");
    scanf("%f", &salario_base);
    salario_receber = salario_base + (salario_base * 10 / 100) - (salario_base * 8 / 100);
    printf("Salario a receber: %.2f", salario_receber);
    return 0;
}
