#include <stdio.h>

/*
Toma entrada y la escribe en el archivo
*/
int main(int argc,char* argv[])
{
	FILE* archivo;
	archivo=fopen("prueba.txt","r+t");
	int caracter;
	while((caracter=getchar())!='\n')
	{
		fputc(caracter,archivo);
	}
	
	fclose(archivo);
	return 0;
}