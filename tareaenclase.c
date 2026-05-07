#include <stdio.h>
#include "sumar.h"
#include "restar.h"

int main(int argc, char const *argv[]){
    int a, b;
    printf("ingrese 1er numero:");
    scanf("%d", &a);
    printf("Ingrese 2do numero: ");
    scanf("%d", &b);
    printf("%d\n", sumar(a,b));
    printf("%d ", restar(a,b));
    return 0;
}
//3er commit gcc -o runprograma .\tareaenclase.c .\sumar.c, se agrego el .exe//