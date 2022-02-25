#include <stdio.h>

int main(){
    //definimos un arreglo unidimensional de 10 valores
    int array[10];
    // imprimimos utilizando sizeof para saber el tamaño en bytes de un entero
    printf("El tamaño de un entero en bytes es: %d.\n", sizeof(int));
    // Imprimir las direcciones de memoria de cada uno de los elementos del arreglo
    printf("[");
    for(int j=0; j<10; j++){
    	printf("%p ", &array[j]);
	}
	printf("]\n");
    // Se declara un arreglo flotante de 3x3
    float Farray[3][3];
    //  Imprimir usando sizeof el tamaño de un float
    printf("El tamaño de un flotante en bytes es: %d.\n", sizeof(float));
    // Imprimir las direcciones de memoria de cada uno de los elementos del arreglo de 3x3
    printf("[");
    for(int i=0;i<3;i++){
    	for(int j=0;j<3;j++){
    		printf("%p ", &Farray[j]);
		}
		printf("%p ", &Farray[i]);
	}
	printf("]\n");
    // Declarar un arreglo de doubles de 3 dimensiones de 2x3x2
    double Darray[2][3][2];
    // Imprimir usando sizeof el tamaño de un double
    printf("El tamaño de un doble en bytes es: %d.\n", sizeof(double));
    // Imprimir las direcciones de memoria de cada uno de los elementos del arreglo de 2x3x2
    printf("[");
    for(int i=0;i<2;i++){
		printf("%p ", &Farray[i]);
		for(int j=0;j<3;j++){
			printf("%p ", &Farray[j]);
			for(int k=0; k<2;k++){
    			printf("%p ", &Darray[k]);
			}
		}
	}
	printf("]\n");
    return 0;
}