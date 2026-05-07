#include <stdio.h>
#include "sumar.h"
#include "restar.h"
#include "multiplicar.h"
#include "division.h"

int main(int argc, char const *argv[]){
    int a, b;
    printf("ingrese 1er numero:");
    scanf("%d", &a);
    printf("Ingrese 2do numero: ");
    scanf("%d", &b);
    printf("Resultado de la suma es: %d\n", sumar(a,b));
    printf("Resultado de la resta es: %d\n", restar(a,b));
    printf("Resultado de la multiplicacion es: %d\n", multiplicar(a,b));
    printf("Resultado de la division es: %d\n", division(a,b));
    return 0;
}
//4to commit gcc -o runprograma .\tareaenclase.c .\sumar.c .\restar.c .\multiplicar.c .\division.c   >>   se agrego el .exe//
//se agrego la funcion multiplicacion y division//