#include <stdio.h>

int main(int argc, char *argv[]){
    int valor1, valor2, valor3;

    printf("\nIngresa un valor: ");
    scanf("%d", &valor1);
    printf("\nIngresa un valor: ");
    scanf("%d", &valor2);
    printf("\nIngresa un valor: ");
    scanf("%d", &valor3);

    if (valor1>valor2 && valor1>valor3)
    {
        printf("\nEl valor mayor es: %d", valor1);

    }else if(valor2>valor1 && valor2>valor3){
        printf("\nEl valor mayor es: %d", valor2);

    }else if(valor3>valor1 && valor3>valor2){
        printf("\nEl valor mayor es: %d", valor3);
    }



    return 0;
}