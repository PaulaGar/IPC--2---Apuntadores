#include <stdio.h>
//Ejercicio 7 Error en la desreferenciacion del apuntador
int main() {
    
    float *ptr_float;
    
    printf("el valor apuntado por ptr_float es %f", *ptr_float);
    *ptr_float = 10.5;
    
    return 0;
}