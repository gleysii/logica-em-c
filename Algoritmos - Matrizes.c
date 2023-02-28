#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
	int Matriz[3][3];
	int i, j;
	int menor = 100000; 
	int somaimpares; 
	int maiordiagonal;
	
	setlocale(LC_ALL, "Portuguese");
	
	Matriz[0][0] = 45;
    Matriz[0][1] = 18;
    Matriz[0][2] = 97;
    Matriz[1][0] = 98;
    Matriz[1][1] = 102;
    Matriz[1][2] = 103;
    Matriz[2][0] = 274;
    Matriz[2][1] = 754;
    Matriz[2][2] = 198;
    
   
    //impressão da matriz
    printf("\nA matriz:");
    for(i=0;i<3;i++){
    	for(j=0;j<3;j++){
    		printf("\nElemento [%d][%d]: %d", i, j, Matriz[i][j]);
		}
	}
    
    //menor elemento da matriz
     for(i=0;i<3;i++){
     	for(j=0;j<3;j++){
     	if(Matriz[i][j] < menor){
            menor = Matriz[i][j];
        }	
     		
		}	       
    }
	
	printf("\n\nDados solicitados:");
	printf("\n\nO menor elemento da matriz é: %d", menor);
	
	//soma dos ímpares da matriz
	
	 for(i=0;i<3;i++){
     	for(j=0;j<3;j++){
     	if(Matriz[i][j] % 2 != 0){
            somaimpares = somaimpares + Matriz[i][j];
        }	
     	else{}
	   }	       
    }
    
    	printf("\nA soma dos elementos ímpares da matriz é: %d", somaimpares);
    	
    	
    	
     //soma dos elementos da diagonal principal
    	
    	
    	for(i=0; i<3; i++)
	{
	
		for(j=0; j<3; j++)
	  {
	  	if(i == j)
	{
		if(maiordiagonal == 0)
		{
			maiordiagonal = Matriz[i][j];
		}
		if(Matriz[i][j] > maiordiagonal)
		{
			maiordiagonal = Matriz[i][j];
		}
	}
	  }
	  
	}
	
	printf("\nO maior valor da diagonal da matriz é: %d", maiordiagonal);
	
	printf("\n\n\tFIM");

	
	
	
	
	
	
	
}
