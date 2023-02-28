#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>

int main(){

	float Matriz[6][4];
	float somapecas[6], somasetores[4]; 
	char pecas[6][20] = {"Mancal","Biela","Frange","Pistão","Anel","Bloco"};
	float auxsomapecas, auxsomasetores;
	setlocale(LC_ALL, "Portuguese");
	
	int i, j; 
	
	   
    //atribuição da tabela na matriz 
    Matriz[0][0] = 678.00;
    Matriz[0][1] = 200.00;
    Matriz[0][2] = 100.00;
    Matriz[0][3] = 90.00;
  
    Matriz[1][0] = 50.00;
    Matriz[1][1] = 340.00;
    Matriz[1][2] = 120.00;
	Matriz[1][3] = 89.00;
   
    Matriz[2][0] = 12.00;
    Matriz[2][1] = 20.00;
    Matriz[2][2] = 55.00;
    Matriz[2][3] = 56.00;
     
    Matriz[3][0] = 190.00;
    Matriz[3][1] = 456.00;
    Matriz[3][2] = 300.00;
    Matriz[3][3] = 230.00;
    
    Matriz[4][0] = 234.00;
    Matriz[4][1] = 120.00;
    Matriz[4][2] = 80.00;
    Matriz[4][3] = 100.00;
    
    Matriz[5][0] = 2000.00;
    Matriz[5][1] = 1890.00;
    Matriz[5][2] = 1000.00;
    Matriz[5][3] = 800.00;
    

    
    
    printf("\nOs valores inseridos matriz:\n");
    //impressão da matriz
    
    for(i=0;i<6;i++){
    	for(j=0;j<4;j++){
    		printf("\nElemento [%d][%d]: %.2f", i, j, Matriz[i][j]);
		}
	}
   
   //somando valor por peça específica 
    for(i=0; i<6; i++){
        
        auxsomapecas = 0;//congela linha 
        for(j=0;j<4;j++){//percorre as colunas 
            
         auxsomapecas=auxsomapecas+Matriz[i][j]; 
            
        }
        
        somapecas[i] = auxsomapecas;
    }
    
    //impressão total peças 
    
    i=1;
    printf("\n\nSoma por peças:\n");
    printf("---------------\n");
     for(i=0; i<6; i++){
        
        printf("\n%s: R$%0.2f", pecas[i], somapecas[i]);       // por o nome das peças dentro do vetor
        
    }
   
    //somando valor por peça coluna específica
    
    i=0;
    j=0;
    
    //Leitura de coluna
     for(j=0; j<4; j++){
        
        auxsomasetores=0; //congela coluna - invertemos os loopings 
       
        for(i=0;i<6;i++){
            
			auxsomasetores=auxsomasetores+Matriz[i][j];         
            
        } 
        
        somasetores[j] = auxsomasetores; //ao final do looping interno acrescenta o valor no vetor e repete o looping 
    } 

   
    i=0;
    //impressão 
    printf("\n\nSoma por setor:\n");
    printf("---------------\n");
    for(i=0;i<4;i++){
        
        printf("Setor %d: R$%.2f\n", i+1 , somasetores[i]);
        
    }
    
  printf("\n\n\tFIM");
	
	
	
	return 0;
	
	
}
