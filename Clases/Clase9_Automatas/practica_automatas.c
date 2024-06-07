#include <stdio.h>
#include <ctype.h>

int verificaCaracteres(char* cadena);
int esPalabra(char* cadena);
int columna(int c);

int main() 
{
	char micadena[]="1234567890";
	
	if(!verificaCaracteres(micadena))
	{
		printf("Hay caracteres que no pertenecen al alfabeto\n");
		return 0;
	}
	else

	if(esPalabra(micadena))
	{
		printf("Es palabra del lenguaje\n");
	}
	else
	{
		printf("No pertenece al lenguaje\n");
	}	
	
	return 0;
}

int verificaCaracteres(char* cadena)
{
	int i;
	for(i=0;cadena[i]!='\0';i++)
	{
		if(!(cadena[i]=='+'||
			 cadena[i]=='-'||
			 isdigit(cadena[i])))
		 {
		 	return 0;
		 }
	}
	return 1;
}

int esPalabra(char* cadena)
{
	static int tablaTrans[4][3]={
						  {2,1,1},
						  {2,3,3},
						  {2,3,3},
	                      {3,3,3}
						};
	int estado=0;
	int i=0;
	int c=cadena[0];
	while(c!='\0')
	{
		estado=tablaTrans[estado][columna(c)];
		
		c=cadena[++i];
	}
	if(estado==2)
	{
		return 1;
	}
	return 0;	
}

int columna(int c)
{
	if(c=='+'){
		return 1;
	}
	if(c=='-'){
		return 2;
	}
    else
		return 0;
}
