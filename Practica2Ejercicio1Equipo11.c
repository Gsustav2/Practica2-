#include <stdio.h>
//Ramos Pasos Estrella C
 int main(){
 	float a[10], *c;
 	c=a;
 	printf("ingrese los valores \n");
 	for (int i=0; i<10; i++ ){
 	 		scanf("%f",&a[i]);
 }
  	for (int i=1; i<10; i++ ){
 	 			*c= *c+*(c+i);
 }
 		printf("\nResultado de la suma de los elementos es :%f",*c);
 		*c= *c/10;
 		printf("\nResultado del promedio de los elementos es :%f",*c);
 }
 

