#include <stdio.h>

// Função para soma
void soma() {
    double num1, num2;
    printf("Digite o primeiro numero: ");
    scanf("%lf", &num1);
    printf("Digite o segundo numero: ");
    scanf("%lf", &num2);
    printf("\nA soma de %.5lf e %.5lf e: %.5lf\n", num1, num2, num1 + num2);
}

// Função para subtração
void subtracao() {
    double num1, num2;
    printf("Digite o primeiro numero: ");
    scanf("%lf", &num1);
    printf("Digite o segundo numero: ");
    scanf("%lf", &num2);
    printf("\nA subtracao de %.5lf e %.5lf e: %.5lf\n", num1, num2, num1 - num2);
}

// Função para multiplicação
void multiplicacao() {
    double num1, num2;
    printf("Digite o primeiro numero: ");
    scanf("%lf", &num1);
    printf("Digite o segundo numero: ");
    scanf("%lf", &num2);
    printf("A multiplicacao de %.5lf e %.5lf e: %.5lf\n", num1, num2, num1 * num2);
}

// Função para divisão
void divisao() {
    double num1, num2;
    printf("Digite o primeiro numero: ");
    scanf("%lf", &num1);
    printf("Digite o segundo numero: ");
    scanf("%lf", &num2);
    if (num2 != 0) {
        printf("A divisao de %.5lf e %.5lf e: %.5lf\n", num1, num2, num1 / num2);
    } else {
        printf("\nErro: Divisao por zero nao existe!\n");
    }
}

// Função para potenciação
void potenciacao() {
    double base, expoente;
    printf("Digite a base: ");
    scanf("%lf", &base);
    printf("Digite o expoente: ");
    scanf("%lf", &expoente);
    double resultado = 1;
    for (int i = 0; i < (int)expoente; i++) {
        resultado *= base;
    }
    printf("\n%.5lf elevado a %.5lf e: %.5lf\n", base, expoente, resultado);
}

// Função para raiz quadrada
void raiz_quadrada() {
    double num;
    printf("Digite o numero: ");
    scanf("%lf", &num);
    if (num >= 0) {
        double resultado = 1;
        double erro = 0.00001;
        double raiz = num / 2;
        while ((raiz * raiz - num) > erro || (raiz * raiz - num) < -erro) {
            raiz = (raiz + (num / raiz)) / 2;
        }
        printf("\nA raiz quadrada de %.5lf e: %.5lf\n", num, raiz);
    } else {
        printf("\nErro: Raiz quadrada de numero negativo nao exista!\n");
    }
}

// Função para fatorial
long long fatorial(int n) {
    if (n < 0) return -1;
    if (n == 0 || n == 1) return 1;
    return n * fatorial(n - 1);
}

void calcular_fatorial() {
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    long long resultado = fatorial(num);
    if (resultado == -1) {
        printf("Erro: Fatorial de numero negativo!\n");
    } else {
        printf("O fatorial de %d e: %lld\n", num, resultado);
    }
}

// Função para calcular MDC
int mdc(int a, int b) {
    if (b == 0) return a;
    return mdc(b, a % b);
}

void calcular_mdc() {
    int a, b;
    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);
    printf("\n\nO MDC de %d e %d e: %d\n", a, b, mdc(a, b));
}

// Função para calcular MMC
int mmc(int a, int b) {
    return (a * b) / mdc(a, b);
}

void calcular_mmc() {
    int a, b;
    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);
    printf("\n\nO MMC de %d e %d e: %d\n", a, b, mmc(a, b));
}

// Função para resolver a equação do segundo grau
void equacao_segundo_grau() {
    double a, b, c;
    printf("Digite os coeficientes a, b e c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
        printf("Erro: O coeficiente 'a' nao pode ser zero em uma equaçao do segundo grau.\n");
        return;
    }

    double delta = b * b - 4 * a * c;

    if (delta < 0) {
        printf("Nao existem raizes reais.\n");
    } else {
        double raiz1, raiz2;
        raiz1 = (-b + (delta >= 0 ? delta : -delta) / (2 * a)); // Chute inicial para raiz1
        raiz2 = (-b - (delta >= 0 ? delta : -delta) / (2 * a)); // Chute inicial para raiz2

        // Ajustando as raízes
        if (delta == 0) {
            printf("Raiz unica: %.5lf\n", -b / (2 * a));
        } else {
            printf("Raizes: %.5lf e %.5lf\n", raiz1, raiz2);
        }
    }
}

int main() {
    int opcao;

    while (1) {
        printf("\n\n\nEscolha uma das alternativas:\n");
        printf("0. Sair\n");
        printf("1. Soma\n");
        printf("2. Subtracao\n");
        printf("3. Multiplicacao\n");
        printf("4. Divisao\n");
        printf("5. Potenciacao\n");
        printf("6. Raiz Quadrada\n");
        printf("7. Fatorial\n");
        printf("8. MDC\n");
        printf("9. MMC\n");
        printf("10. Equacao de Segundo Grau (nao implementada)\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        if (opcao == 0) {
            printf("Saindo...\n");
            return 0;
        } else if (opcao == 1) {
            soma();
        } else if (opcao == 2) {
            subtracao();
        } else if (opcao == 3) {
            multiplicacao();
        } else if (opcao == 4) {
            divisao();
        } else if (opcao == 5) {
            potenciacao();
        } else if (opcao == 6) {
            raiz_quadrada();
        } else if (opcao == 7) {
            calcular_fatorial();
        } else if (opcao == 8) {
            calcular_mdc();
        } else if (opcao == 9) {
            calcular_mmc();
        } else if (opcao == 10) {
            equacao_segundo_grau();
        } else {
            printf("Opcao invalida! Tente novamente.\n");
        }
    }

    return 0;
}
