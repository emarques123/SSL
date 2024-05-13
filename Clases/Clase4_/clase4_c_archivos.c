#include <stdlib.h>
#include <stdio.h>

int main(int argc,char* argv[])
{
    FILE* archivo;
    archivo=fopen("prueba.txt","r+t");
    fputc ('A',archivo);

    int caracter;

    fclose(archivo);
    
    return 0;
}