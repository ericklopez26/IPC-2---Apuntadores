#include <stdio.h>


int main() {
    
    char c = 'z';
    char *pc = &c;
    char **ppc = &pc;
    char ***pppc = &ppc;
    
    ***pppc = 'm'; // cambia el valor de c a 'm'
    
    printf("El valor de ultimo apuntador es: %c", ***pppc);
    
    
    return 0;
}