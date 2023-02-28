include <stdio.h>

int main()


{
    int code, quantity;
    float value, total, discountValue, afterDiscount, acumulation, discount;
    int n=0, i=0;
    
    printf("\n\t\tWELCOME!!!");
    printf("\n\nHow many differents products do you have? ");
    scanf("%d",&n);
    
    for (i=0; i<n; i++){
        
     printf("\n\nEnter product amount: ");
     scanf("%d",&quantity);
        
     printf("\nEnter the product code from 1 to 40 code: ");
     scanf("%d",&code);
     
     while(code < 1 || code > 40){
         printf("\nError! Please enter a valid code from 1 to 40 code: ");
         fflush(stdin);
         scanf("%d",&code);
         }
      
      if(code >= 1 && code <= 10){
          value = 10.00;
      }
      
      else if(code >= 11 && code <= 20){
          value = 15.00;
      }
      
      else if(code >= 21 && code <= 30){
           value = 20.00;
      }
      else if(code >= 31 && code <= 40){
          value = 30.00;
      }
      
     total=quantity*value;
    
    //Desconto
    
    if(total <= 250){
     discount = 0.05;
     
    }
    
    else if(total > 250 && total < 500 ){
        discount = 0.10;
    }
    
    else if(total > 500){
        discount = 0.15;
    }
    
    discountValue = total*discount;
    afterDiscount = total-discount;
    
    printf("\nTotal: U$S%.2f", total);
    printf("\nDiscount: U$S%.2f", discountValue);
    printf("\nValue after discount: %.2f", afterDiscount);
    printf("\n------------------------------------------");
    printf("\nTotal: U$S%.2f", afterDiscount);
    
    acumulation=acumulation+afterDiscount;
    
    }
    printf("\n\n=========================================");
    printf("\n\n\tGRAND TOTAL: U$S%.2f", acumulation);
     

    return 0;
    
    
}

