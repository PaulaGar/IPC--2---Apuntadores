#include <stdio.h>
//Ejercicio 10

int main() {
    
  int a=10, b=15;
  int *const ptr=&a;
  *ptr=3; //si se puede dar un nuevo valor
  ptr=&b; //No se puede reasignar
    
    return 0;
}
  
  