#include <stdio.h>
/*
escribe entrada en archivo existente y luego imprime lo que contiene
*/
int main(int argc,char* argv[])
{
	FILE* archivo;
	archivo=fopen("prueba.txt","r+t");
	int caracter;
	
	//while(fgetc(archivo)!=EOF); muestra como corta la lectura de archivo 

	while((caracter=getchar())!='\n'){
		fputc(caracter,archivo);
	}

    fclose(archivo);
    
	archivo=fopen("prueba.txt","r+t");
	

    int otra;
    while((otra=fgetc(archivo))!=EOF){
		printf("%c",otra);
	}

	fclose(archivo);
	
    return 0;
}