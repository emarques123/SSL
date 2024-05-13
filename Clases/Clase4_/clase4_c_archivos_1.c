#include <stdlib.h>
#include <stdio.h>
/*
abre archivo existente e ingresa 4 caracteres
*/
int main(int argc,char* argv[])
{
    FILE* archivo;
    archivo=fopen("prueba.txt","r+t");
    fputc ('A',archivo);
    fputc ('A',archivo);
    fputc ('B',archivo);
    fputc ('B',archivo);
    //int caracter;

    fclose(archivo);
    
    return 0;
}