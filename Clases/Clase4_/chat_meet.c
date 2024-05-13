/*
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

===============

{
	FILE* archivo;
	archivo=fopen("prueba.txt","r+t");
	int caracter;
	
	while(fgetc(archivo)!=EOF);

	while((caracter=getchar())!='\n')
	{
		fputc(caracter,archivo);
	}
			
	fclose(archivo);
	return 0;
}

=======
while((otra=fgetc(archivo))!=EOF){
		printf("%c",otra);
	}
=======
*/
/*
int main(int argc,char* argv[])
{
	FILE* archivo;
	//archivo=fopen("prueba.txt","r+t");
	char buffer[10]="123456789";
	char bufferL[10];
	fputs(buffer,archivo);
	fclose(archivo);*/
/*	
	archivo=fopen("prueba.txt","r+t");
	printf("%s \n",fgets(bufferL,9,archivo));
	printf("%s",bufferL);
	fclose(archivo);
	return 0;
}

=========
*/

/*
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
	registro.b=130;
	fwrite(&registro,sizeof(rg),1,archivo);
	
	fseek(archivo,0,SEEK_SET);//SEEK_SET SEEK_CUR SEEK_END
	
	fread(&registro,sizeof(rg),1,archivo);
	
	printf("%d",registro.b);
	fclose(archivo);
	return 0;
}
*/