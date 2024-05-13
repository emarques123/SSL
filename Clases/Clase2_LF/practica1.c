#include <stdio.h>
#include <string.h>

unsigned cadenaLongitud (char*);

int main()
{
    char cadena1[10] = "cadena1";
    printf("%d",cadenaLongitud(&cadena1));
}


unsigned cadenaLongitud(char* cadena){
    unsigned contador = 0;
    while (getc(&cadena)!='\0'){
        ++contador;
    }
    return contador;
}