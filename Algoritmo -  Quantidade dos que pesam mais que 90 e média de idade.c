#include <stdio.h>
#include <ctype.h>

int main()


{
    float peso;
    int i, idade, over90=0; 
    float acumuladoridade, mediaidade;
    
    for(i=0;i<5;i++){
    
    printf("\nInsira a idade: ");
    scanf("%d",&idade);
    acumuladoridade=acumuladoridade+idade;
    mediaidade=acumuladoridade/5;
    
    printf("\nInsira o peso: ");
    scanf("%f",&peso);
    
    if(peso >= 90){
        over90++;
        
    }else{}
    
    }
    
    printf("\nA quantidade de pessoas acima dos 90kg é: %d", over90);
    printf("\nA media de idade é: %.0f", mediaidade);
    

    return 0;
}
