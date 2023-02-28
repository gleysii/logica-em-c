#include <stdio.h>

int main()
{
    int n=0, i, idade, mais50menos60kg=0, idades=0, acumuladorIdadeInf150cm=0, cabelosRuivosSemOlhosAzuis=0; 
    float altura, peso, percentualAzuis=0, acumuladorAzuis=0;
    double media=0;
    char corOlhos, corCabelos;
    
    printf("\n\t\tBem-vindo!!!");
    
    printf("\n\nInsira a quantidade de pessoas: ");
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        
        printf("\nInsira a idade: ");
        scanf("%d",&idade);
        
        printf("\nInsira a altura: ");
        scanf("%f",&altura);
        
        printf("\nInsira o peso: ");
        scanf("%f",&peso);
        
        fflush(stdin);
        printf("\nQual é a cor dos olhos? A - Azuis | P - Pretos | C - Castanhos | V - Verdes |");
        scanf(" %c",&corOlhos);
        
        printf("\nQual a cor do cabelo? P - Pretos | L - Loiros | R - Ruivo ");
        scanf(" %c",&corCabelos);
        
        if(corOlhos == 'a' || corOlhos == 'A'){
        acumuladorAzuis++;
        }
        else{}
        
        if(idade > 50 && peso < 60){
            mais50menos60kg++;
        }
        else{}
        
        if(altura < 1.50){//se altura menor a 150cm 
            idades++;//acumular em idades
            acumuladorIdadeInf150cm=acumuladorIdadeInf150cm+idade;//somar idades 
        }
        else{}
        
        fflush(stdin);
        if(corCabelos == 'r' || corCabelos == 'R'){
         if(corOlhos != 'A' || corOlhos != 'a'){
         cabelosRuivosSemOlhosAzuis++;
         }
         else{}
        }
        else{} 
        
        
    }
    
    
    printf("\nA quantidade de pessoas com mais de 50 anos e peso inferior a 60kg: %d", mais50menos60kg);
    
    media=acumuladorIdadeInf150cm/idades;
    printf("\nA média da idade das pessoas com altura inferior a 1,50mts: %.0lf", media);
    
    if(acumuladorAzuis > 0){
    percentualAzuis=(acumuladorAzuis/n)*100;
    printf("\nO percentual de pessoas com olhos azuis é igual a %.2f%", percentualAzuis);
    }
    else{}
    
    printf("\nNúmero de pessoas com cabelos ruivos mas sem olhos azuis: %d", cabelosRuivosSemOlhosAzuis);
    
    return 0;
}

