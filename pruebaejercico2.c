#include <stdlib.h>
#include <stdio.h>
#include<locale.h>
#include<stdbool.h>
//Realizado por Olguin Palomino Edgar Emilio 18-02-2022 al 24-02-2022

int main(){
	setlocale(LC_ALL, "spanish");
	
	bool booleano;
	int tam, *ptr, lab, *ptrep;
	
	printf("Ingresa el tamaño de tu arreglo ");
	scanf("%d", &tam);
	
	int arreglo[tam];
	ptr=arreglo;
	ptrep=arreglo;
	
	ptr=(int*)malloc(tam*sizeof(int));
	
	printf("Ingresa los elementos de tu arreglo ");
	for(int i=0; i<tam ; i++){
	        scanf("%d", (ptr+i));
	}
	
	printf("El arreglo que ingresaste es:\n [");
		for(int i=0; i<tam ; i++){
	        printf("%d", *(ptr+i));
	       	 if(i==tam-1){
	        	printf("] ");
	        }else{
	        	printf("\t ");
	        }
	}
	
      do {
      for(int i=0; i<tam; i++){
		int pos=0;
		for(int j=0; j<tam; j++){
			if((ptr+i)==(ptr+j)){
				booleano==true;
				pos=j;	
				for(int x=pos; x<tam-1; x++){
				(*(ptr+x))=(*(ptr+x+1));
		}	
	        	tam=tam-1;
			}else{
				booleano=false;
			}	
			break;
		}	

	}

     } while (booleano==true);
		
	
		printf("\n ");
		printf("El arreglo que ingresaste sin repeticiones es:\n ");
		printf("[ ");
		for(int i=0; i<tam ; i++){
	        printf("%d", *(ptr+i));
	        if(i==tam-1){
	        	printf("] ");
	        }else{
	        	printf("\t ");
	        }
	        
	}
		

return 0;	
}