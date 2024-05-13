#include <stdio.h>
/*
utiliza las funciones fputs(pone un string) y fgets(lee un string)
*/
int main(int argc,char* argv[]){

	FILE* archivo;
	archivo=fopen("prueba.txt","w+t");
	char buffer[10]="123456789"; // [largo cadena+1] con +1 siendo '\0' -> fin de la cadena
	char bufferL[10];
    fputs(buffer,archivo);
	fclose(archivo);
	
	archivo=fopen("prueba.txt","r+t");
	printf("%s \n",fgets(bufferL,10,archivo)); //necesito 10 para mostrar del 1al9 xq el fin de la cadena ocupa 1 caracter
	printf("%s",bufferL);
	fclose(archivo);

	return 0;
}
