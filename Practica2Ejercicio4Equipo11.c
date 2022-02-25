#include <stdio.h>
void agregar(int*c,int x);
void eliminar(int*,int);
//Ramos Pasos Estrella C
 int main(){
 	int x,z;
 	int a[x], *c;
 	c=a;
 		printf("ingrese la dimension del arreglo \n");
 		scanf("%i",&x);
 	printf("ingrese los valores \n");
 	for (int i=0; i<x; i++ ){
 	 		scanf("%d",&*(c+i));
 }
 printf("\n ¿Que desea realizar? \n1. Agregar \n2. Eliminar:");
 	scanf("%i",&z);
 	switch(z)
 	{
 		case 1:
 			{	
 		       agregar (c,x);
			  printf("\nResultado:");
  	         for (int i=0; i<x+2; i++ ){
 	 	     printf("\n%d",*(c+i));
            }	
 			break;
 			}
 		case 2:
 		    {
 			 eliminar(c,x);
 			
 	    	break;
 	     	}
 	}
}
void agregar(int *c, int x){
int u;
printf("\nColoca cuantos elementos deseas agregar");
scanf("%d",&u);
for (int i=x; i<x+u; i++ ){
scanf("%d",&*(c+i));
}
}
void eliminar(int *c, int x ){
int f;
printf("\nQue posicion desea eliminar del arreglo inicial");
scanf("%d",&f);
if (f>=x){
printf("\nError la posicion que colocaste no existe");	
}
else 
{
*(c+f-1)=0;	
 printf("\nResultado:");
  	         for (int i=0; i<x; i++ ){
 	 	     printf("\n%d",*(c+i));
            }	
}
}


