//C�digo para calcular valor de refrigera��o

#include <stdio.h>

int main()
{
    float unitaryValue, refrigerationCost;
    int i;
    char category;
    
    for(i=0;i<11;i++){
        
        printf("\nEnter the product unitary value:");
        scanf("%f",&unitaryValue);
        
        printf("\nDoes this product need refrigeration?");
        scanf("%c",&refrigeration);
        
        if(refrigeration == 'y' || refrigeration 'Y'){//Se precisar de refrigera��o - 1 if
          
          if(unitaryValue < 50){//menos que 50 - 2 if 
             
             printf("\nWhat's the product category?");//questionar 
             scanf("%c",&category);
             
             //parei o c�digo aqui - bom, este � o exerc�cio 3- preciso colocar aqui as categorias dos produtos dentro de outro if, bem como nas outras categorias
              
            }
            
          else if(unitaryValue > 50 && unitaryValue <= 70){//De 50 a 70 - 2 if
              refrigerationCost=21.00
              
            }
            
          else if(unitaryValue > 70){//Se custar mais que 70 vai depender da caterigoria 2 if
             printf("\nWhat's the product category?");//questionar 
             scanf("%c",&category);
             if(category == 'F' || category == 'f'){// 3 if | F = Food
                 
             }else if(category == 'C' || category == 'C'){// 3 if | C = Cleaning
                 
             }else if(category == 'W' || category == 'w'){//3 if | W = Clothing
                 
             }else{} //fechando o if 3 
             
            }
          
          else{}//fechando o if 2 
            
        }
        
        else if(refrigeration == 'n' || refrigeration == 'N'){//Se n�o precisa de refrigera��o - 1 if
        
                  if(unitaryValue < 50){//menos que 50 - 2 if 
              refrigerationCost=0.00;
              
            }
            
          else if(unitaryValue > 50 && unitaryValue <= 70){//De 50 a 70 - 2 if
              refrigerationCost=21.00
              
            }
            
          else if(unitaryValue > 70){//Se custar mais que 70 vai depender da caterigoria 2 if
             printf("\nWhat's the product category?");//questionar 
             scanf("%c",&category);
             if(category == 'F' || category == 'f'){// 3 if | F = Food
                 
             }
             else if(category == 'C' || category == 'C'){// 3 if | C = Cleaning
             
             }
             else if(category == 'W' || category == 'w'){//3 if | W = Clothing
             
             }
             else{} //fechando o if 3 
        
            
        }
        
        else{}//fechando o if 1 
        
        
    }

    return 0;
}
