#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i, funcionarios;
    float salarios, media_salarios, quantidade_salario= 0, maior_salario= 0, menor_salario= 999999;
    do{
        printf("Empresa\n");
        printf("Digite a quantidade de funcionarios que tem na sua empresa: ");
        scanf("%d", &funcionarios);
    }while(funcionarios < 1);

    for(i= 0; i<funcionarios; i++){
        printf("Informe os salários de seus funcionários: ");
        scanf("%f", &salarios);
        quantidade_salario= quantidade_salario + salarios;

        if(menor_salario > salarios){
            menor_salario = salarios;
        }
        if(maior_salario < salarios){
            maior_salario = salarios;
        }

    }
    media_salarios= quantidade_salario / funcionarios;
    printf("A valor médio de sálario da empresa é de R$ %.2f", media_salarios);


    printf("\nO menor salário é de R$ %.2f", menor_salario);


    printf("\nO maior salário é de R$ %.2f", maior_salario);


    return 0;
}
