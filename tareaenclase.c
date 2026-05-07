#include <stdio.h>
int main(int argc, char const *argv[]){
    int a, b;
    printf("ingrese 1er numero:");
    scanf("%d", &a);
    printf("Ingrese 2do numero: ");
    scanf("%d", &b);
    printf("%d ", sumar(a,b));
    return 0;
}
//1er commit//
int sumar(int a, int b){
    return a + b;
}