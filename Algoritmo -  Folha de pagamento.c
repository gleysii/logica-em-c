#include <stdio.h>
#include <math.h>
#include <ctype.h>
int main()


{
    int i, n, nHomens=0, nMulheres=0, hrsAula;
    char sexo;
    float salarioBruto, salarioFinal, descontos;
    float acumuladorSalarioHomens=0, mediaSalarioHomens;
    float acumuladorSalarioMulheres=0, mediaSalarioMulheres; 
    float codigo; 
    
    printf("Insira a quantidade de professores: ");
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        
        printf("\n\nInsira o código: ");
        scanf("%f",&codigo);
        
        printf("\nInsira o sexo | M para Masculino ou F para Feminino |: ");
        scanf(" %c",&sexo);
        sexo = toupper(sexo);
        fflush(stdin);
        while(sexo != 'M' && sexo != 'F'){
            printf("\nErro! Insira um caractere válido! M para Masculino ou F para Feminino:");
            scanf(" %c",&sexo);//ler antes de limpar 
            sexo = toupper(sexo); 
            fflush(stdin);
            
        }
 
        printf("\nInsira a quantidade de horas aula: ");
        scanf("%d",&hrsAula);
        
        salarioBruto=hrsAula * 18.50;
        
        if(sexo == 'm' || sexo == 'M'){
            salarioFinal=salarioBruto-(0.10*salarioBruto);
            acumuladorSalarioHomens=acumuladorSalarioHomens+salarioFinal;
            nHomens++;
        }else if(sexo == 'f' || sexo == 'F'){
            salarioFinal=salarioBruto-(0.05*salarioBruto);
            acumuladorSalarioMulheres=acumuladorSalarioMulheres+salarioFinal;
            nMulheres++;
        }else
        {}
        
        //impressões de dados individuais
          
          printf("\nSalario bruto = R$ %.2f",salarioBruto);
          printf("\nSalario líquido = R$ %.2f",salarioFinal);
          descontos = salarioBruto-salarioFinal;
          printf("\nDescontos = R$ %.2f",descontos);
          
          if(sexo == 'f' || 'F'){
              printf("\n*Desconto para mulheres de 5%");
          }else{
              printf("\n*Desconto para homens de 10%");
          }
          
    }
    
    //impressões de dados coletivos
    printf("\n--------------------------------------------------");
    if(nHomens > 0){
    mediaSalarioHomens = acumuladorSalarioHomens/nHomens;
    printf("\nA média salarial líquida dos homens é = R$ %.2f", mediaSalarioHomens);
    }
    else{}
    
    if(nMulheres > 0){
    mediaSalarioMulheres = acumuladorSalarioMulheres/nMulheres;
    printf("\nA média salarial líquida das mulheres é = R$ %.2f", mediaSalarioMulheres);
    }
    else{}
    
    return 0;
}
