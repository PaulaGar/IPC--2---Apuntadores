#include <stdio.h>
//Ejercicio 4
int main() {
    int x=33;
    int y;
    int *p;
    p=&x;
    printf("el valor de p es: %d \n",*p);
    y = *p+10;
    printf("el valor de y es: %d",y);
    return 0;
}