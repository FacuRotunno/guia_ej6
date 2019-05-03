
#include <stdio.h>


int num1;
int num2;
int res;

void main(){
    printf("Ingresar primer numero: \n ");
    scanf("%i" , &num1);

    printf("Ingresar segundo numero; \n");
    scanf("%i", &num2);

    res=num1 / num2;

    printf("El resultado es: %i ", res );



}