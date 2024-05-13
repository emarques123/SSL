#include <stdio.h>
/*
escribe struct en archivo binario
repasar!
*/
typedef struct {
		int a;
		int b;
	}rg;

int main(int argc,char* argv[])
{

	FILE* archivo;
	archivo=fopen("prueba.bin","r+b");
	rg registro;
	registro.a =20;
	registro.b=120;
	fwrite(&registro,sizeof(rg),1,archivo);
	
    // ¿que hacía esto? buscar!! ##### ##### ##### ##### 
	fseek(archivo,0,SEEK_SET);//SEEK_SET SEEK_CUR SEEK_END 
	
	fread(&registro,sizeof(rg),1,archivo);
	
	printf("%d",registro.b);
	fclose(archivo);
	return 0;
}