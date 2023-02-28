// comentar código

#include <stdio.h>
#include <math.h>

int main(){
      
      float unitaryValue=0, total=0, shipping=0, customTaxes=0, taxedValue=0, totaltaxes, totalTaxesShipping, totalTaxesValue;
      float unitarysInsuranceValue, taxesInsurenceValue, shippingInsurenceValueTaxes;
      char transport, chargeType, transportType, shippingType;
      int i, n, country=0;
      
      printf("\t\tSOFTWARE TO CALCULATE LOGISTICAL EXPENSES \n\t\t\t\tWelcome!\n");
      printf("\nFirst, please insert the number of products that you need calculate:");
      scanf("%d",&n);//número de vezes de produto = número de vezes que o looping vai girar 
      
     for(i=0; i<n; i++){
         printf("\nInsert product value:");
         scanf("%f",&unitaryValue);
         fflush(stdin);
         
         printf("\nIt's the charge dangerous? Enter Y to YES and N to NO: ");
         scanf("%s",&chargeType);
         
         //Sequência de if dentro de if = tipo de carga > país > tipo de transporte 
         if(chargeType == 'Y' || chargeType == 'y'){//Se a carga for perigosa 
             
             printf("\n\nInsert the country code: 1 - EUA | 2- MEXICO | 3- OTHERS: ");
             scanf("%d",&country);
             while(country <1 && country >3){//validação, será inválido até digitar um dos três números 
                 printf("ERROR! Please enter a code: 1 - EUA | 2- MEXICO | 3- OTHERS: ");
                 fflush(stdin);
                 scanf("%d",&country);
                }
                
             if(country == 1){//se for para os EUA não tem seguro 
                 shipping = 50.00;
                 
                 printf("\nWhat's the type of transport? A - AIR | F - FLUVIAL | T - TERRESTRIAL:");
                 scanf("%s",&transportType);
                 
                 if(transportType == 'A' || 'a'){// Mas se for para os EUA e por avião é cobrado 50% do valor de seguro
                     unitarysInsuranceValue=(unitaryValue/2)+unitaryValue;
                 }else{}
                 
                 
             }else if(country ==2){//Se for para o México automaticamente já tem 50% do valor de seguro incluso
                 shipping = 35.00;
                 unitarysInsuranceValue=(unitaryValue/2)+unitaryValue;
                 
                 printf("\nWhat's the type of transport? A - AIR | F - FLUVIAL | T - TERRESTRIAL:");
                 scanf("%s",&transportType);
                 
                 if(transportType == 'A' || 'a'){//não faz diferença porque o seguro já está incluso
                     unitarysInsuranceValue=(unitaryValue/2)+unitaryValue;
                 }else{}
                 
             }else{//Se for para outros países não tem seguro
                 shipping = 24.00;
                 
                 printf("\nWhat's the type of transport? A - AIR | F - FLUVIAL | T - TERRESTRIAL:");//Mas se for para outros países por avião, tem 
                 scanf("%s",&transportType);
                 
                 if(transportType == 'A' || 'a'){
                     unitarysInsuranceValue=(unitaryValue/2)+unitaryValue;
                 }else{}
             }
             
         }else{//esse é o else do primeiro print, caso não seja carga perigosa, todas as intruções se repetem 
             printf("\nInsert the country code: 1 - EUA | 2- MEXICO | 3- OTHERS: ");
             scanf("%d",&country);
             while(country <1 && country >3){
                 printf("ERROR! Please enter a code: 1 - EUA | 2- MEXICO | 3- OTHERS: ");
                 fflush(stdin);
                 scanf("%d",&country);
             }
             
             if(country == 1){
                 shipping = 12.00;
                 
                 printf("\nWhat's the type of transport? A - AIR | F - FLUVIAL | T - TERRESTRIAL: ");
                 scanf("%s",&transportType);
                 
                 if(transportType == 'A' || 'a'){
                     unitarysInsuranceValue=(unitaryValue/2)+unitaryValue;
                 }else{}
                 
             }else if(country ==2){
                 shipping = 34.00;
                 unitarysInsuranceValue=(unitaryValue/2)+unitaryValue;
                 
                 printf("\nWhat's the type of transport? A - AIR | F - FLUVIAL | T - TERRESTRIAL: ");
                 scanf("%s",&transportType);
                 
                 if(transportType == 'A' || 'a'){
                     unitarysInsuranceValue=(unitaryValue/2)+unitaryValue;
                 }else{}
                 
             }else{
                 shipping = 60.00;
                 
                 printf("\nWhat's the type of transport? A - AIR | F - FLUVIAL | T - TERRESTRIAL: ");
                 scanf("%s",&transportType);
                 
                 if(transportType == 'A' || 'a'){
                     unitarysInsuranceValue=(unitaryValue/2)+unitaryValue;
                 }else{}
                }
            }
        printf("\nUnitary value: US$%.2f", unitaryValue);//impressão do valor unitário 
         
        //calculo das taxas
        if(total<=100){
            customTaxes=0.05;
        }else{
            customTaxes=0.10;
        }
        if(country == 2 || transportType == 'a' || transportType == 'A'){//bloco de instruções que é para imprimir caso seja pra o méxico e/ou seja por avião
        taxedValue=unitaryValue+(unitaryValue*customTaxes);
        totaltaxes=taxedValue-unitaryValue;
        
        printf("\nTaxed value is: US$%.2f - Total taxes: US$%.2f", taxedValue, totaltaxes);
        taxesInsurenceValue=unitarysInsuranceValue+totaltaxes;
        printf("\nValue with taxes & insurance: US$%.2f *Products shipping to Mexico or by airplane has a insurence increase", taxesInsurenceValue);
        printf("\nTransport value is: US$%.2f", shipping);
        shippingInsurenceValueTaxes=taxesInsurenceValue+shipping;
        printf("\nSUBTOTAL: %.2f", shippingInsurenceValueTaxes );
        }
        else{//bloco de instruções que é para imprimir caso NÃO seja pra o méxico e/ou seja por avião
        
        taxedValue=unitaryValue+(unitaryValue*customTaxes);
            
        taxedValue=unitaryValue+(unitaryValue*customTaxes);
        totaltaxes=taxedValue-unitaryValue;
        
        printf("\nTaxed value is: US$%.2f - Total taxes: US$%.2f", taxedValue, totaltaxes);
        totalTaxesValue=unitaryValue+totaltaxes;
        printf("\nValue with taxes: US$%.2f", totalTaxesValue);
        printf("\nTransport value is: US$%.2f", shipping);
        totalTaxesShipping=totalTaxesValue+shipping;
        printf("\nSUBTOTAL US$: %.2f", totalTaxesShipping);
        }
     }
      return 0;
    }

