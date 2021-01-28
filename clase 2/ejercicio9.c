#include <stdio.h>
//Ejercicio 9

int main() {
    
  char c ='z';
  char *pc=&c;
  char **ppc=&pc;
  char ***pppc=&ppc;
  ***pppc='m'; //cambia de z a m su valor
  
  printf("el ultimo valor del apuntador es: %c",***pppc);
    
    return 0;
}
  