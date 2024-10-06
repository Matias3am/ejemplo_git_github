#include <stdio.h>

int main(){
    int numero1,numero2;
    printf("Ingrese 2 numeros: \n");
    scanf("%d %d", &numero1, &numero2);
    printf("La resta de %d y %d es : %d\n", numero1, numero2, (numero1-numero2));
}