int main() {
    int num;
    int soma = 0;

    printf("Digite um número (0 para sair): ");
    scanf("%f", &num);

    while (num != 0) {
        soma += num;
        printf("Digite um número (0 para sair): ");
        scanf("%f", &num);
    }

    printf("Soma:", soma);
    return 0;
}   
