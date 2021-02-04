#include <stdio.h>

int main() {
    int v=18, w=21;
    const int *ptr=&v;
    ptr =&w;
    //*ptr =16; //No se deja cambiar el valor del apuntador
    w=3;
    return 0;
}