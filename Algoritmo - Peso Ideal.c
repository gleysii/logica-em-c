#include <stdio.h>
#include <ctype.h>

int main()


{
    float altura, peso, pesoideal;
    char sexo;
    
    printf("\nInsira o sua altura");
    scanf("%f",&altura);
    
    printf("\nInsira o sua altura");
    scanf("%f",&peso);
    
    printf("\nInsira o sexo | M para masculino e F para feminino ");
    scanf(" %c",&sexo);
    sexo = toupper(sexo);
    
    while(sexo != 'M' && sexo != ){
        printf("Erro! Insira um caractere válido");
        scanf(" %c",&sexo);//ler antes de limpar 
        sexo = toupper(sexo); 
        fflush(stdin);
        
    }
    
    if(sexo == 'F'){
        
        pesoideal = (62.1 * altura) – 44.7; 
        
    }
    else if(sexo == 'M'){
        
        pesoideal = (72.7 * altura) – 58; 
        
    }
    else{}
    
    printf("\nSeu peso ideal é: %.2f", pesoideal);
    

    return 0;
}

