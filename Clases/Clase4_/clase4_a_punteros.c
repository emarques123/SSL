#include <stdlib.h>
#include <stdio.h>

int main()
{
  //printf("%s","hola mundo");
  char nombre[50];
  int a=9,b=12;
  printf("Variable a:%d y variable b:%d \n",a,b);
  intercambio(&a,&b);
  printf("Variable a:%d y variable b:%d",a,b);
return 0;
}
void intercambio(int* a,int* b)
{
	int aux=*a;
	*a = *b;
	*b = aux;
	return;
}