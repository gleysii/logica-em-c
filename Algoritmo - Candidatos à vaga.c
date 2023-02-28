#include <stdio.h>
#include <string.h>

int main()
{
    char gender, predominantGender;
    int i, n;
    int men=0, women=0;
    
    printf("\nEnter gender numbers:");
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        
        printf("\nEnter candidate gender, enter W to Woman and M to Man: ");
        scanf(" %c",&gender);
        
        //acréscimo 
        if(gender == 'm' || gender == 'M'){
            men++;
        }else if( gender == 'w' || gender == 'W'){
            women++;
        }else{}
       
        //comparação gênero que aparece com mais frequência 
        if(men > women){
            predominantGender = gender;
        }else if(women > men){
            predominantGender = gender;
        }else{}
        
    }
    
    //impressão
    printf("\nMen total's: %d", men);
    printf("\nWomen total's: %d", women);
    
    if(men != women){//caso a quantidade seja diferente
    printf("\nPredominant gender it's %c", predominantGender);
    }else{//caso a quantidade seja igual 
    printf("\nPredominant gender it's: there is the same women and men amount");
    }
   
    return 0;
}


// COMPLETO
#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    char gender, predominantGender, wPreviousX, mPreviousX, under35PreviousX=0;
    int i, n;
    int men=0, women=0;
    int age, youngestWomanX=100, accumulateMenX=0; 
    float totalManAgeToMedia=0, mediaAgeMenX=0, percentualMenOver45, menOver45;
    
    printf("\nEnter the numbers of candidates:");
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        
        printf("\nEnter candidate gender, enter W to Woman and M to Man: ");
        scanf(" %c",&gender);
        
        
        if(gender == 'm' || gender == 'M'){//se homem
            men++;
            
         printf("\nEnter candidate's age: ");
         scanf("%d",&age);
         
         if(age>45){//se maior de 45
             menOver45++;//acumular
             printf("\nHas the candidate previous experience? - Enter Y to YES and N to NO: ");
             scanf(" %c",&mPreviousX);
             
             if(mPreviousX == 'y' || mPreviousX == 'Y'){//se tiver experiência
                totalManAgeToMedia=totalManAgeToMedia+age;//acumular total da idade
                accumulateMenX++;//acumular quantos homens têm experiência 
                mediaAgeMenX=totalManAgeToMedia/accumulateMenX;//fazer média de idade 
                
             }else{} 
            }else{}
         
         
         
        }else if( gender == 'w' || gender == 'W'){
            women++;
         printf("\nEnter candidate's age:");
         scanf("%d",&age);
        
             if(age<35){
                 printf("\nHas the candidate previous experience? - Enter Y to YES and N to NO: ");
                 scanf(" %c",&wPreviousX);
                 if(wPreviousX == 'y' || wPreviousX == 'Y'){
                    under35PreviousX++;
                 }else{}
                 
                 if(age < youngestWomanX){
                    youngestWomanX=age;
                 }else{}
                 
             }else{
               printf("\nHas candidate previous experience? - Enter Y to YES and N to NO: ");
               scanf(" %c",&wPreviousX);
             }
             
        }else{}

        //comparação gênero que aparece com mais frequência 
        if(men > women){
            predominantGender = gender;
        }else if(women > men){
            predominantGender = gender;
        }else{}
        
        
        
    }
    
    //impressão
     printf("\nMen total's: %d", men);
     printf("\nWomen total's: %d", women);
    
    if(men != women){//caso a quantidade seja diferente
     printf("\nPredominant gender it's %c:", predominantGender);
    }else{//caso a quantidade seja igual 
     printf("\nThe predominant gender is: there is the same women and men amount");
    }
    if(women>0){
     printf("\n\n\tWOMEN DATA");
     printf("\n==============================================");
     printf("\nWomen under 35 years old with previous experience: %d", under35PreviousX );
     printf("\nYoungest woman with previous experience has: %d years", youngestWomanX);
    }else{}
    
    if(men>0){
     printf("\n\n\tMEN DATA");
     printf("\n=============================================");
     percentualMenOver45 = (menOver45*100)/men;
     printf("\nMan over 45 years old percentual is %.0f", percentualMenOver45);
     printf("\nAverage of age men with previous experience total's %.0f years", mediaAgeMenX);
     
    }else{}
   
    return 0;
}


