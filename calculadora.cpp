#include <stdio.h>
#include <math.h>

int main() {
    printf("Escolha uma opção:\n");
    printf("1. Adição\n");
    printf("2. Subtração\n");
    printf("3. Multiplicação\n");
    printf("4. Divisão\n");
    printf("5. Porcentagem\n");

    int opcao;
    float num1, num2, resultado;

    printf("Digite a opção: ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        printf("Digite o primeiro número: ");
        scanf("%f", &num1);
        printf("Digite o segundo número: ");
        scanf("%f", &num2);
        resultado = num1 + num2;
        printf("Resultado: %.2f\n", resultado);
    } else if (opcao == 2) {
        printf("Digite o primeiro número: ");
        scanf("%f", &num1);
        printf("Digite o segundo número: ");
        scanf("%f", &num2);
        resultado = num1 - num2;
        printf("Resultado: %.2f\n", resultado);
    } else if (opcao == 3) {
        printf("Digite o primeiro número: ");
        scanf("%f", &num1);
        printf("Digite o segundo número: ");
        scanf("%f", &num2);
        resultado = num1 * num2;
        printf("Resultado: %.2f\n", resultado);
    } else if (opcao == 4) {
        printf("Digite o primeiro número: ");
        scanf("%f", &num1);
        printf("Digite o segundo número: ");
        scanf("%f", &num2);
        if (num2 != 0) {
            resultado = num1 / num2;
            printf("Resultado: %.2f\n", resultado);
        } else {
            printf("Erro: Divisão por zero não é permitida.\n");
        }
    } else if (opcao == 5) {
        printf("Digite o número: ");
        scanf("%f", &num1);
        printf("Digite a porcentagem: ");
        scanf("%f", &num2);
        resultado = (num1 * num2) / 100;
        printf("Resultado: %.2f\n", resultado);
    } else {
        printf("Opção inválida.\n");
    }
     return 0;
}
