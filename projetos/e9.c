int main() {
    int nota;
    int cont = 0;

    for (int i = 1; i <= 5; i++) {
        printf("Nota: ", i);
        scanf("%f", &nota);
        if (nota >= 6) {
            cont++;
            printf("Nota", i, nota);
        }
    }

    printf("Quantidade: ", cont);
    
}   
