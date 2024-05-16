#include <stdio.h>

int main() {
    float nota[4];
    float soma = 0;

    
    for (int i = 0; i < 4; i++) {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &nota[i]);
        soma += nota[i]; 
    }

 
    printf("\nNotas digitadas:\n");
    for (int i = 0; i < 4; i++) {
        printf("%.2f\n", nota[i]);
    }

   
    float media = soma / 4;

   
    printf("\nA media das notas e: %.2f\n", media);

    return 0;
}